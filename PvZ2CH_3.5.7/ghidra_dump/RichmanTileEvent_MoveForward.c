// Class: RichmanTileEvent_MoveForward


/* RichmanTileEvent_MoveForward::ExecuteEventPost() */

void RichmanTileEvent_MoveForward::ExecuteEventPost(void)

{
  undefined *this;
  int iVar1;
  Mutex *this_00;
  
  this = gMessageRouter;
  this_00 = (Mutex *)Sexy::LazySingleton<RichmanTileEventManager>::GetInstance();
  iVar1 = EA::Thread::Mutex::GetLockCount(this_00);
  MessageRouter::Post<int,int>
            ((MessageRouter *)this,Message::TileEvent_MoveForward_Index_Post,iVar1);
  return;
}


/* RichmanTileEvent_MoveForward::~RichmanTileEvent_MoveForward() */

void __thiscall
RichmanTileEvent_MoveForward::~RichmanTileEvent_MoveForward(RichmanTileEvent_MoveForward *this)

{
  *(undefined ***)this = &PTR__RichmanTileEvent_MoveForward_06987e00;
  RichmanTileEventBase::~RichmanTileEventBase((RichmanTileEventBase *)this);
  return;
}


/* RichmanTileEvent_MoveForward::~RichmanTileEvent_MoveForward() */

void __thiscall
RichmanTileEvent_MoveForward::~RichmanTileEvent_MoveForward(RichmanTileEvent_MoveForward *this)

{
  ~RichmanTileEvent_MoveForward(this);
  AK::FreeHook(this);
  return;
}


/* RichmanTileEvent_MoveForward::ExecuteEvent() */

void __thiscall RichmanTileEvent_MoveForward::ExecuteEvent(RichmanTileEvent_MoveForward *this)

{
  RichmanTileEventManager *this_00;
  
  RichmanTileEventBase::ExecuteEvent((RichmanTileEventBase *)this);
  this_00 = (RichmanTileEventManager *)Sexy::LazySingleton<RichmanTileEventManager>::GetInstance();
  RichmanTileEventManager::RequestRichmanProtocol(this_00,5,0,0);
  return;
}


/* RichmanTileEvent_MoveForward::RichmanTileEvent_MoveForward(RichmanTileEventConfig&) */

void __thiscall
RichmanTileEvent_MoveForward::RichmanTileEvent_MoveForward
          (RichmanTileEvent_MoveForward *this,RichmanTileEventConfig *param_1)

{
  RichmanTileEventBase::RichmanTileEventBase((RichmanTileEventBase *)this,param_1);
  *(undefined ***)this = &PTR__RichmanTileEvent_MoveForward_06987e00;
  return;
}

