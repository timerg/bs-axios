/* Creating an instance */
open Axios;

let inst = Instance.create(makeConfig(~baseURL="https://example.com", ()));
Js.Promise.(
  Instance.get(inst, "/")
  |> then_(resp => resolve(Js.log(resp->Axios_types.dataGet)))
);