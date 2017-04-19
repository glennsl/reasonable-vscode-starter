open Vscode;

let activate context => {
  Js.log "Congratulations, your extension \"reasonable-vscode-starter\" is now active!";

  let disposable =
    Vscode.Commands.registerCommand "extension.sayHello"
      (fun () => Vscode.Window.showInformationMessage "Hello Reason!");

  ExtensionContext.subscriptions context |> Js.Array.push disposable;
}