// Class: RichmanTileEventBase


/* RichmanTileEventBase::GetConfig() const */

RichmanTileEventConfig * RichmanTileEventBase::GetConfig(void)

{
  long in_x0;
  RichmanTileEventConfig *in_x8;
  
  RichmanTileEventConfig::RichmanTileEventConfig(in_x8,(RichmanTileEventConfig *)(in_x0 + 8));
  return in_x8;
}


/* RichmanTileEventBase::ExecuteEvent() */

void __thiscall RichmanTileEventBase::ExecuteEvent(RichmanTileEventBase *this)

{
  (**(code **)(*(long *)this + 0x20))();
  return;
}


/* RichmanTileEventBase::~RichmanTileEventBase() */

void __thiscall RichmanTileEventBase::~RichmanTileEventBase(RichmanTileEventBase *this)

{
  *(undefined ***)this = &PTR__RichmanTileEventBase_06987b70;
  RichmanTileEventConfig::~RichmanTileEventConfig((RichmanTileEventConfig *)(this + 8));
  return;
}


/* RichmanTileEventBase::~RichmanTileEventBase() */

void __thiscall RichmanTileEventBase::~RichmanTileEventBase(RichmanTileEventBase *this)

{
  ~RichmanTileEventBase(this);
  AK::FreeHook(this);
  return;
}


/* RichmanTileEventBase::RichmanTileEventBase(RichmanTileEventConfig&) */

void __thiscall
RichmanTileEventBase::RichmanTileEventBase
          (RichmanTileEventBase *this,RichmanTileEventConfig *param_1)

{
  *(undefined ***)this = &PTR__RichmanTileEventBase_06987b70;
  RichmanTileEventConfig::RichmanTileEventConfig((RichmanTileEventConfig *)(this + 8));
  RichmanTileEventConfig::operator=((RichmanTileEventConfig *)(this + 8),param_1);
  return;
}

