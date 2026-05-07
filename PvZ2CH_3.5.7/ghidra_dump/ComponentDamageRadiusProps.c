// Class: ComponentDamageRadiusProps


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ComponentDamageRadiusProps::ComponentDamageRadiusProps() */

void __thiscall
ComponentDamageRadiusProps::ComponentDamageRadiusProps(ComponentDamageRadiusProps *this)

{
  long lVar1;
  
  lVar1 = ___stack_chk_guard;
  ComponentRadiusBurstProps::ComponentRadiusBurstProps((ComponentRadiusBurstProps *)this);
  std::string::string((string *)(this + 0x88),"");
  nop();
  Sexy::Point::Point((Point *)(this + 0x90),0,0);
  std::string::string((string *)(this + 0x98),"");
  nop();
  DamageInfoProps::DamageInfoProps((DamageInfoProps *)(this + 0xa0));
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ComponentDamageRadiusProps::TEMPNAMEPLACEHOLDERVALUE(ComponentDamageRadiusProps const&) */

ComponentDamageRadiusProps * __thiscall
ComponentDamageRadiusProps::operator=
          (ComponentDamageRadiusProps *this,ComponentDamageRadiusProps *param_1)

{
  ComponentRadiusBurstProps::operator=
            ((ComponentRadiusBurstProps *)this,(ComponentRadiusBurstProps *)param_1);
  thunk_FUN_05475e00(this + 0x88,param_1 + 0x88);
  *(undefined8 *)(this + 0x90) = *(undefined8 *)(param_1 + 0x90);
  thunk_FUN_05475e00(this + 0x98,param_1 + 0x98);
  DamageInfoProps::operator=((DamageInfoProps *)(this + 0xa0),(DamageInfoProps *)(param_1 + 0xa0));
  return this;
}


/* ComponentDamageRadiusProps::~ComponentDamageRadiusProps() */

void __thiscall
ComponentDamageRadiusProps::~ComponentDamageRadiusProps(ComponentDamageRadiusProps *this)

{
  DamageInfoProps::~DamageInfoProps((DamageInfoProps *)(this + 0xa0));
  std::string::~string((string *)(this + 0x98));
  std::string::~string((string *)(this + 0x88));
  ComponentRadiusBurstProps::~ComponentRadiusBurstProps((ComponentRadiusBurstProps *)this);
  return;
}


/* ComponentDamageRadiusProps::TEMPNAMEPLACEHOLDERVALUE(ComponentDamageRadiusProps&&) */

ComponentDamageRadiusProps * __thiscall
ComponentDamageRadiusProps::operator=
          (ComponentDamageRadiusProps *this,ComponentDamageRadiusProps *param_1)

{
  ComponentRadiusBurstProps::operator=
            ((ComponentRadiusBurstProps *)this,(ComponentRadiusBurstProps *)param_1);
  FUN_05474278(this + 0x88,param_1 + 0x88);
  *(undefined8 *)(this + 0x90) = *(undefined8 *)(param_1 + 0x90);
  FUN_05474278(this + 0x98,param_1 + 0x98);
  DamageInfoProps::operator=((DamageInfoProps *)(this + 0xa0),(DamageInfoProps *)(param_1 + 0xa0));
  return this;
}


/* ComponentDamageRadiusProps::ComponentDamageRadiusProps(ComponentDamageRadiusProps const&) */

void __thiscall
ComponentDamageRadiusProps::ComponentDamageRadiusProps
          (ComponentDamageRadiusProps *this,ComponentDamageRadiusProps *param_1)

{
  ComponentRadiusBurstProps::ComponentRadiusBurstProps
            ((ComponentRadiusBurstProps *)this,(ComponentRadiusBurstProps *)param_1);
  FUN_05475d88(this + 0x88,param_1 + 0x88);
  Sexy::Point::Point((Point *)(this + 0x90),(TPoint *)(param_1 + 0x90));
  FUN_05475d88(this + 0x98,param_1 + 0x98);
  DamageInfoProps::DamageInfoProps
            ((DamageInfoProps *)(this + 0xa0),(DamageInfoProps *)(param_1 + 0xa0));
  return;
}

