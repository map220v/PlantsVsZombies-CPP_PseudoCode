// Class: RichmanTileEvent_MoveBackward


/* RichmanTileEvent_MoveBackward::ExecuteEventPost() */

void RichmanTileEvent_MoveBackward::ExecuteEventPost(void)

{
  undefined *this;
  int iVar1;
  Mutex *this_00;
  
  this = gMessageRouter;
  this_00 = (Mutex *)Sexy::LazySingleton<RichmanTileEventManager>::GetInstance();
  iVar1 = EA::Thread::Mutex::GetLockCount(this_00);
  MessageRouter::Post<int,int>
            ((MessageRouter *)this,Message::TileEvent_MoveBackward_Index_Post,iVar1);
  return;
}


/* RichmanTileEvent_MoveBackward::~RichmanTileEvent_MoveBackward() */

void __thiscall
RichmanTileEvent_MoveBackward::~RichmanTileEvent_MoveBackward(RichmanTileEvent_MoveBackward *this)

{
  *(undefined ***)this = &PTR__RichmanTileEvent_MoveBackward_06987e40;
  RichmanTileEventBase::~RichmanTileEventBase((RichmanTileEventBase *)this);
  return;
}


/* RichmanTileEvent_MoveBackward::~RichmanTileEvent_MoveBackward() */

void __thiscall
RichmanTileEvent_MoveBackward::~RichmanTileEvent_MoveBackward(RichmanTileEvent_MoveBackward *this)

{
  ~RichmanTileEvent_MoveBackward(this);
  AK::FreeHook(this);
  return;
}


/* RichmanTileEvent_MoveBackward::ExecuteEvent() */

void __thiscall RichmanTileEvent_MoveBackward::ExecuteEvent(RichmanTileEvent_MoveBackward *this)

{
  RichmanTileEventManager *this_00;
  
  RichmanTileEventBase::ExecuteEvent((RichmanTileEventBase *)this);
  this_00 = (RichmanTileEventManager *)Sexy::LazySingleton<RichmanTileEventManager>::GetInstance();
  RichmanTileEventManager::RequestRichmanProtocol(this_00,6,0,0);
  return;
}


/* RichmanTileEvent_MoveBackward::RichmanTileEvent_MoveBackward(RichmanTileEventConfig&) */

void __thiscall
RichmanTileEvent_MoveBackward::RichmanTileEvent_MoveBackward
          (RichmanTileEvent_MoveBackward *this,RichmanTileEventConfig *param_1)

{
  RichmanTileEventBase::RichmanTileEventBase((RichmanTileEventBase *)this,param_1);
  *(undefined ***)this = &PTR__RichmanTileEvent_MoveBackward_06987e40;
  return;
}

