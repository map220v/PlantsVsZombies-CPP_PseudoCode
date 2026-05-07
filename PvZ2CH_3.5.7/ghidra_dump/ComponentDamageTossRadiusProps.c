// Class: ComponentDamageTossRadiusProps


/* ComponentDamageTossRadiusProps::ComponentDamageTossRadiusProps() */

void __thiscall
ComponentDamageTossRadiusProps::ComponentDamageTossRadiusProps(ComponentDamageTossRadiusProps *this)

{
  ComponentDamageRadiusProps::ComponentDamageRadiusProps((ComponentDamageRadiusProps *)this);
  *(undefined4 *)(this + 0xe8) = 0;
  *(undefined4 *)(this + 0xec) = 0;
  *(undefined4 *)(this + 0xf0) = 0;
  return;
}


/* ComponentDamageTossRadiusProps::TEMPNAMEPLACEHOLDERVALUE(ComponentDamageTossRadiusProps const&)
    */

ComponentDamageTossRadiusProps * __thiscall
ComponentDamageTossRadiusProps::operator=
          (ComponentDamageTossRadiusProps *this,ComponentDamageTossRadiusProps *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  ComponentDamageRadiusProps::operator=
            ((ComponentDamageRadiusProps *)this,(ComponentDamageRadiusProps *)param_1);
  uVar1 = *(undefined4 *)(param_1 + 0xec);
  uVar2 = *(undefined4 *)(param_1 + 0xf0);
  *(undefined4 *)(this + 0xe8) = *(undefined4 *)(param_1 + 0xe8);
  *(undefined4 *)(this + 0xec) = uVar1;
  *(undefined4 *)(this + 0xf0) = uVar2;
  return this;
}


/* ComponentDamageTossRadiusProps::~ComponentDamageTossRadiusProps() */

void __thiscall
ComponentDamageTossRadiusProps::~ComponentDamageTossRadiusProps
          (ComponentDamageTossRadiusProps *this)

{
  DamageInfoProps::~DamageInfoProps((DamageInfoProps *)(this + 0xa0));
  std::string::~string((string *)(this + 0x98));
  std::string::~string((string *)(this + 0x88));
  ComponentRadiusBurstProps::~ComponentRadiusBurstProps((ComponentRadiusBurstProps *)this);
  return;
}

