// Class: ComponentWarmingRadiusProps


/* ComponentWarmingRadiusProps::ComponentWarmingRadiusProps() */

void __thiscall
ComponentWarmingRadiusProps::ComponentWarmingRadiusProps(ComponentWarmingRadiusProps *this)

{
  ComponentRadiusBurstProps::ComponentRadiusBurstProps((ComponentRadiusBurstProps *)this);
  *(undefined4 *)(this + 0x84) = 0;
  DamageInfoProps::DamageInfoProps((DamageInfoProps *)(this + 0x88));
  DamageInfoProps::DamageInfoProps((DamageInfoProps *)(this + 0xd0));
  return;
}


/* ComponentWarmingRadiusProps::ComponentWarmingRadiusProps(ComponentWarmingRadiusProps const&) */

void __thiscall
ComponentWarmingRadiusProps::ComponentWarmingRadiusProps
          (ComponentWarmingRadiusProps *this,ComponentWarmingRadiusProps *param_1)

{
  ComponentRadiusBurstProps::ComponentRadiusBurstProps
            ((ComponentRadiusBurstProps *)this,(ComponentRadiusBurstProps *)param_1);
  *(undefined4 *)(this + 0x84) = *(undefined4 *)(param_1 + 0x84);
  DamageInfoProps::DamageInfoProps
            ((DamageInfoProps *)(this + 0x88),(DamageInfoProps *)(param_1 + 0x88));
  DamageInfoProps::DamageInfoProps
            ((DamageInfoProps *)(this + 0xd0),(DamageInfoProps *)(param_1 + 0xd0));
  return;
}


/* ComponentWarmingRadiusProps::~ComponentWarmingRadiusProps() */

void __thiscall
ComponentWarmingRadiusProps::~ComponentWarmingRadiusProps(ComponentWarmingRadiusProps *this)

{
  DamageInfoProps::~DamageInfoProps((DamageInfoProps *)(this + 0xd0));
  DamageInfoProps::~DamageInfoProps((DamageInfoProps *)(this + 0x88));
  ComponentRadiusBurstProps::~ComponentRadiusBurstProps((ComponentRadiusBurstProps *)this);
  return;
}


/* ComponentWarmingRadiusProps::TEMPNAMEPLACEHOLDERVALUE(ComponentWarmingRadiusProps const&) */

ComponentWarmingRadiusProps * __thiscall
ComponentWarmingRadiusProps::operator=
          (ComponentWarmingRadiusProps *this,ComponentWarmingRadiusProps *param_1)

{
  ComponentRadiusBurstProps::operator=
            ((ComponentRadiusBurstProps *)this,(ComponentRadiusBurstProps *)param_1);
  *(undefined4 *)(this + 0x84) = *(undefined4 *)(param_1 + 0x84);
  DamageInfoProps::operator=((DamageInfoProps *)(this + 0x88),(DamageInfoProps *)(param_1 + 0x88));
  DamageInfoProps::operator=((DamageInfoProps *)(this + 0xd0),(DamageInfoProps *)(param_1 + 0xd0));
  return this;
}


/* ComponentWarmingRadiusProps::TEMPNAMEPLACEHOLDERVALUE(ComponentWarmingRadiusProps&&) */

ComponentWarmingRadiusProps * __thiscall
ComponentWarmingRadiusProps::operator=
          (ComponentWarmingRadiusProps *this,ComponentWarmingRadiusProps *param_1)

{
  ComponentRadiusBurstProps::operator=
            ((ComponentRadiusBurstProps *)this,(ComponentRadiusBurstProps *)param_1);
  *(undefined4 *)(this + 0x84) = *(undefined4 *)(param_1 + 0x84);
  DamageInfoProps::operator=((DamageInfoProps *)(this + 0x88),(DamageInfoProps *)(param_1 + 0x88));
  DamageInfoProps::operator=((DamageInfoProps *)(this + 0xd0),(DamageInfoProps *)(param_1 + 0xd0));
  return this;
}

