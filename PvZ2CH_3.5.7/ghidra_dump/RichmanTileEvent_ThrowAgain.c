// Class: RichmanTileEvent_ThrowAgain


/* RichmanTileEvent_ThrowAgain::ExecuteEvent() */

void __thiscall RichmanTileEvent_ThrowAgain::ExecuteEvent(RichmanTileEvent_ThrowAgain *this)

{
  (**(code **)(*(long *)this + 0x20))();
  return;
}


/* RichmanTileEvent_ThrowAgain::ExecuteEventPost() */

void __thiscall RichmanTileEvent_ThrowAgain::ExecuteEventPost(RichmanTileEvent_ThrowAgain *this)

{
  MessageRouter::Post<int,int,int,int>
            ((MessageRouter *)gMessageRouter,Message::TileEvent_ThrowAgain_Post,
             *(int *)(this + 0x20),*(int *)(this + 0x24));
  return;
}


/* RichmanTileEvent_ThrowAgain::PostEventMessage() */

void __thiscall RichmanTileEvent_ThrowAgain::PostEventMessage(RichmanTileEvent_ThrowAgain *this)

{
  MessageRouter::Post<int,int,int,int>
            ((MessageRouter *)gMessageRouter,Message::TileEvent_ThrowAgain,*(int *)(this + 0x20),
             *(int *)(this + 0x24));
  return;
}


/* RichmanTileEvent_ThrowAgain::~RichmanTileEvent_ThrowAgain() */

void __thiscall
RichmanTileEvent_ThrowAgain::~RichmanTileEvent_ThrowAgain(RichmanTileEvent_ThrowAgain *this)

{
  *(undefined ***)this = &PTR__RichmanTileEvent_ThrowAgain_06987e80;
  RichmanTileEventBase::~RichmanTileEventBase((RichmanTileEventBase *)this);
  return;
}


/* RichmanTileEvent_ThrowAgain::~RichmanTileEvent_ThrowAgain() */

void __thiscall
RichmanTileEvent_ThrowAgain::~RichmanTileEvent_ThrowAgain(RichmanTileEvent_ThrowAgain *this)

{
  ~RichmanTileEvent_ThrowAgain(this);
  AK::FreeHook(this);
  return;
}


/* RichmanTileEvent_ThrowAgain::RichmanTileEvent_ThrowAgain(RichmanTileEventConfig&) */

void __thiscall
RichmanTileEvent_ThrowAgain::RichmanTileEvent_ThrowAgain
          (RichmanTileEvent_ThrowAgain *this,RichmanTileEventConfig *param_1)

{
  RichmanTileEventBase::RichmanTileEventBase((RichmanTileEventBase *)this,param_1);
  *(undefined ***)this = &PTR__RichmanTileEvent_ThrowAgain_06987e80;
  return;
}

