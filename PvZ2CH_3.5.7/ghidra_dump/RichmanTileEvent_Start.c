// Class: RichmanTileEvent_Start


/* RichmanTileEvent_Start::ExecuteEventPost() */

void RichmanTileEvent_Start::ExecuteEventPost(void)

{
  MessageRouter::Post((_func_void *)gMessageRouter);
  return;
}


/* RichmanTileEvent_Start::PostEventMessage() */

void RichmanTileEvent_Start::PostEventMessage(void)

{
  MessageRouter::Post((_func_void *)gMessageRouter);
  return;
}


/* RichmanTileEvent_Start::~RichmanTileEvent_Start() */

void __thiscall RichmanTileEvent_Start::~RichmanTileEvent_Start(RichmanTileEvent_Start *this)

{
  *(undefined ***)this = &PTR__RichmanTileEvent_Start_06987ec0;
  RichmanTileEventBase::~RichmanTileEventBase((RichmanTileEventBase *)this);
  return;
}


/* RichmanTileEvent_Start::~RichmanTileEvent_Start() */

void __thiscall RichmanTileEvent_Start::~RichmanTileEvent_Start(RichmanTileEvent_Start *this)

{
  ~RichmanTileEvent_Start(this);
  AK::FreeHook(this);
  return;
}


/* RichmanTileEvent_Start::RichmanTileEvent_Start(RichmanTileEventConfig&) */

void __thiscall
RichmanTileEvent_Start::RichmanTileEvent_Start
          (RichmanTileEvent_Start *this,RichmanTileEventConfig *param_1)

{
  RichmanTileEventBase::RichmanTileEventBase((RichmanTileEventBase *)this,param_1);
  *(undefined ***)this = &PTR__RichmanTileEvent_Start_06987ec0;
  return;
}

