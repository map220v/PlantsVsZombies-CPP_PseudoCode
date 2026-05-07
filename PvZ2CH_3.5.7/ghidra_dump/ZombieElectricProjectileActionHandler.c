// Class: ZombieElectricProjectileActionHandler


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieElectricProjectileActionHandler::StaticClassInit() */

void ZombieElectricProjectileActionHandler::StaticClassInit(void)

{
  CRefSymbolDb *this;
  long *plVar1;
  code *pcVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((this != (CRefSymbolDb *)0x0) &&
     (plVar1 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(this), plVar1 != (long *)0x0
     )) {
    pcVar2 = *(code **)(*plVar1 + 0x18);
    std::string::string(asStack_10,"ZombieElectricProjectileActionHandler");
    (*pcVar2)(plVar1,asStack_10,FUN_047a741c,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieElectricProjectileActionHandler::StaticGetClass() */

long * ZombieElectricProjectileActionHandler::StaticGetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = ZombieProjectileActionHandler::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieElectricProjectileActionHandler",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieElectricProjectileActionHandler::GetClass() const */

long * ZombieElectricProjectileActionHandler::GetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = ZombieProjectileActionHandler::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieElectricProjectileActionHandler",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieElectricProjectileActionHandler::launchProjectile(Sexy::SexyVector3, Sexy::SexyVector3,
   Sexy::RtWeakPtr<ProjectilePropertySheet>, float) */

void __thiscall
ZombieElectricProjectileActionHandler::launchProjectile
          (Board *param_1,undefined8 param_2,undefined8 param_3,
          ZombieElectricProjectileActionHandler *this,RtWeakPtrBase *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar2 = *(undefined8 *)(gLawnApp + 0x9f0);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_5);
  uVar1 = ZombieActionHandler::getZombie((ZombieActionHandler *)this);
  Board::AddProjectile(param_1,param_2,param_3,uVar2,aRStack_10,uVar1,0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieElectricProjectileActionHandler::ZombieElectricProjectileActionHandler() */

void __thiscall
ZombieElectricProjectileActionHandler::ZombieElectricProjectileActionHandler
          (ZombieElectricProjectileActionHandler *this)

{
  ZombieProjectileActionHandler::ZombieProjectileActionHandler
            ((ZombieProjectileActionHandler *)this);
  *(undefined ***)this = &PTR_GetClass_068e01a0;
  return;
}


/* ZombieElectricProjectileActionHandler::StaticNew() */

ZombieElectricProjectileActionHandler * ZombieElectricProjectileActionHandler::StaticNew(void)

{
  ZombieElectricProjectileActionHandler *this;
  
  this = ::operator_new(0x28);
  ZombieElectricProjectileActionHandler(this);
  return this;
}


/* ZombieElectricProjectileActionHandler::~ZombieElectricProjectileActionHandler() */

void __thiscall
ZombieElectricProjectileActionHandler::~ZombieElectricProjectileActionHandler
          (ZombieElectricProjectileActionHandler *this)

{
  *(undefined ***)this = &PTR_GetClass_068e01a0;
  ZombieProjectileActionHandler::~ZombieProjectileActionHandler
            ((ZombieProjectileActionHandler *)this);
  return;
}


/* ZombieElectricProjectileActionHandler::~ZombieElectricProjectileActionHandler() */

void __thiscall
ZombieElectricProjectileActionHandler::~ZombieElectricProjectileActionHandler
          (ZombieElectricProjectileActionHandler *this)

{
  ~ZombieElectricProjectileActionHandler(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieElectricProjectileActionHandler::fireProjectile() */

void ZombieElectricProjectileActionHandler::fireProjectile(void)

{
  RtWeakPtr *pRVar1;
  char cVar2;
  int iVar3;
  ZombieActionHandler *in_x0;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this;
  ZombossHydraSprayActionDefinition *pZVar4;
  PlantGroup *this_00;
  undefined8 uVar5;
  SexyVector3 *this_01;
  undefined4 *puVar6;
  code *pcVar7;
  undefined4 in_s1;
  undefined4 in_s2;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_30 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_28 [8];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
          *)ZombieActionHandler::getZombie(in_x0);
  pZVar4 = ZombieActionHandler::getDefinition<ZombossHydraSprayActionDefinition>();
  pcVar7 = *(code **)(*(long *)this + 0x1f8);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  this_00 = (PlantGroup *)
            (*pcVar7)(this,(vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)
                           &local_20);
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::~vector
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             &local_20);
  if (this_00 != (PlantGroup *)0x0) {
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              (a_Stack_30);
    PlantGroup::GetTopPlant(this_00);
    uVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
    cVar2 = Plant::HasCondition(uVar5,9);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
    if (cVar2 == '\0') {
      PlantGroup::GetTopPlant(this_00);
      uVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
      cVar2 = Plant::HasCondition(uVar5,10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
      if (cVar2 == '\0') {
        iVar3 = Sexy::Rand(2);
        pRVar1 = (RtWeakPtr *)(pZVar4 + 0x80);
        if (iVar3 == 1) {
          pRVar1 = (RtWeakPtr *)(pZVar4 + 0x38);
        }
        Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                  ((RtWeakPtr<PowerPropertySheet> *)a_Stack_30,pRVar1);
      }
      else {
        Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                  ((RtWeakPtr<PowerPropertySheet> *)a_Stack_30,(RtWeakPtr *)(pZVar4 + 0x80));
      }
    }
    else {
      Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                ((RtWeakPtr<PowerPropertySheet> *)a_Stack_30,(RtWeakPtr *)(pZVar4 + 0x38));
    }
    pcVar7 = *(code **)(*(long *)in_x0 + 0xb0);
    this_01 = (SexyVector3 *)
              std::
              _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              ::_M_leftmost(this);
    local_20 = Sexy::SexyVector3::operator+(this_01,(SexyVector3 *)(pZVar4 + 0x48));
    local_1c = in_s1;
    local_18 = in_s2;
    puVar6 = (undefined4 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            *)this_00);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_28,(RtWeakPtrBase *)a_Stack_30);
    (*pcVar7)(local_20,local_1c,local_18,*puVar6,puVar6[1],puVar6[2],*(undefined4 *)(pZVar4 + 0x78))
    ;
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_30);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

