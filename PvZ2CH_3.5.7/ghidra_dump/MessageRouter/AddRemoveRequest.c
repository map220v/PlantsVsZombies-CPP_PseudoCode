// Class: MessageRouter::AddRemoveRequest


/* MessageRouter::AddRemoveRequest::AddRemoveRequest(MessageRouter::AddRemoveRequest::QueueAction,
   void*, Sexy::Delegate0 const&) */

void __thiscall
MessageRouter::AddRemoveRequest::AddRemoveRequest
          (AddRemoveRequest *this,undefined4 param_2,undefined8 param_3,Delegate0 *param_4)

{
  *(undefined4 *)this = param_2;
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 8),param_4);
  *(undefined8 *)(this + 0x38) = param_3;
  return;
}


/* MessageRouter::AddRemoveRequest::AddRemoveRequest(MessageRouter::AddRemoveRequest::QueueAction,
   void*) */

void __thiscall
MessageRouter::AddRemoveRequest::AddRemoveRequest
          (AddRemoveRequest *this,undefined4 param_2,undefined8 param_3)

{
  *(undefined4 *)this = param_2;
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 8),(DummyInit *)0x0);
  *(undefined8 *)(this + 0x38) = param_3;
  return;
}


/* MessageRouter::AddRemoveRequest::AddRemoveRequest(MessageRouter::AddRemoveRequest&&) */

void __thiscall
MessageRouter::AddRemoveRequest::AddRemoveRequest(AddRemoveRequest *this,AddRemoveRequest *param_1)

{
  *(undefined4 *)this = *(undefined4 *)param_1;
  Sexy::Delegate0::Delegate0((Delegate0 *)(this + 8),(Delegate0 *)(param_1 + 8));
  *(undefined8 *)(this + 0x38) = *(undefined8 *)(param_1 + 0x38);
  return;
}

