// Class: ComponentDamageTossRadius


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ComponentDamageTossRadius::StaticClassInit() */

void ComponentDamageTossRadius::StaticClassInit(void)

{
  CRefSymbolDb *pCVar1;
  long *plVar2;
  code *pcVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"ComponentDamageTossRadiusProps");
    (*pcVar3)(plVar2,asStack_10,FUN_03b9032c,0xf8,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"ComponentDamageTossRadius");
    (*pcVar3)(plVar2,asStack_10,FUN_03b91ae4,0x308,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ComponentDamageTossRadius::StaticGetClass() */

long * ComponentDamageTossRadius::StaticGetClass(void)

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
  uVar2 = ComponentDamageRadius::StaticGetClass();
  (*pcVar3)(plVar1,"ComponentDamageTossRadius",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ComponentDamageTossRadius::GetClass() const */

long * ComponentDamageTossRadius::GetClass(void)

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
  uVar2 = ComponentDamageRadius::StaticGetClass();
  (*pcVar3)(plVar1,"ComponentDamageTossRadius",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ComponentDamageTossRadius::tossZombies(std::vector<BoardEntity*, std::allocator<BoardEntity*> >
   const&) */

void __thiscall
ComponentDamageTossRadius::tossZombies(ComponentDamageTossRadius *this,vector *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  RealObject *this_00;
  ResourceInfo *pRVar4;
  SexyVector3 *this_01;
  ZombieTosserSubSystem *pZVar5;
  code *pcVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  ZombieTosserSubSystem *pZVar10;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  RtWeakPtr<Sexy::SoundResource> aRStack_60 [16];
  RtReflectionDelegate<Sexy::Delegate1<Zombie*>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_80 = FUN_03b91540(*(undefined8 *)param_1);
  local_78 = FUN_03b91590(*(undefined8 *)(param_1 + 8));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_80,(__normal_iterator *)&local_78), bVar1) {
    std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_80);
    nop();
    pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0x300));
    cVar2 = RealObject::IsOnOpposingTeam(this_00,(RealObject *)pRVar4);
    if (cVar2 != '\0') {
      pcVar6 = *(code **)(*(long *)this_00 + 0x3d0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x300));
      Plant::GetType();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_60,(RtWeakPtrBase *)&local_70);
      cVar2 = (*pcVar6)(this_00,aRStack_60,0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_60);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_70);
      if (((cVar2 != '\0') &&
          (cVar2 = (**(code **)(*(long *)this_00 + 0x380))(this_00,0), cVar2 != '\0')) &&
         (cVar2 = Zombie::IsControlled((Zombie *)this_00), cVar2 == '\0')) {
        this_01 = (SexyVector3 *)
                  std::
                  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                 *)this_00);
        iVar3 = BoardConstants::GRIDSQUARE_WIDTH();
        uVar7 = 0;
        uVar8 = 0;
        EATextSquish::Vec3::Vec3((Vec3 *)aRStack_60,(float)iVar3 * *(float *)(this + 0x2f0),0.0,0.0)
        ;
        local_70 = Sexy::SexyVector3::operator+(this_01,(SexyVector3 *)aRStack_60);
                    /* WARNING: Load size is inaccurate */
        pZVar10._0_4_ = *(ZombieTosserSubSystem **)(this + 0x2f8);
        uVar9 = *(undefined4 *)(this + 0x2f4);
        local_6c = uVar7;
        local_68 = uVar8;
        pZVar5 = Board::GetGameSubSystem<ZombieTosserSubSystem>(*(Board **)(gLawnApp + 0x9f0));
        RtReflectionDelegate<Sexy::Delegate1<Zombie*>>::RtReflectionDelegate(aRStack_50);
        ZombieTosserSubSystem::LaunchZombie
                  (pZVar10._0_4_,uVar9,pZVar5,this_00,(RtWeakPtr<Sexy::ResourceInfo> *)&local_70,
                   aRStack_50,1);
        RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
        ::~RtReflectionDelegate
                  ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                    *)aRStack_50);
      }
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_80);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ComponentDamageTossRadius::ComponentDamageTossRadius() */

void __thiscall
ComponentDamageTossRadius::ComponentDamageTossRadius(ComponentDamageTossRadius *this)

{
  ComponentDamageRadius::ComponentDamageRadius((ComponentDamageRadius *)this);
  *(undefined ***)this = &PTR_GetClass_06735ff0;
  ComponentDamageTossRadiusProps::ComponentDamageTossRadiusProps
            ((ComponentDamageTossRadiusProps *)(this + 0x208));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x300));
  return;
}


/* ComponentDamageTossRadius::StaticNew() */

ComponentDamageTossRadius * ComponentDamageTossRadius::StaticNew(void)

{
  ComponentDamageTossRadius *this;
  
  this = ::operator_new(0x308);
  ComponentDamageTossRadius(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ComponentDamageTossRadius::damageZombies() */

void __thiscall ComponentDamageTossRadius::damageZombies(ComponentDamageTossRadius *this)

{
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_38 [24];
  vector<BoardEntity*,std::allocator<BoardEntity*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_38);
  (**(code **)(*(long *)this + 0xa8))(this,avStack_38);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::vector(avStack_20,(vector *)avStack_38);
  ComponentDamageRadius::applyDamageTo((ComponentDamageRadius *)this,avStack_20);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector(avStack_20);
  if (*(float *)(this + 0x2f0) != 0.0) {
    tossZombies(this,(vector *)avStack_38);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ComponentDamageTossRadius::SetRadiusProps(ComponentDamageTossRadiusProps const&) */

void __thiscall
ComponentDamageTossRadius::SetRadiusProps
          (ComponentDamageTossRadius *this,ComponentDamageTossRadiusProps *param_1)

{
  ComponentDamageRadius::SetRadiusProps
            ((ComponentDamageRadius *)this,(ComponentDamageRadiusProps *)param_1);
  ComponentDamageTossRadiusProps::operator=
            ((ComponentDamageTossRadiusProps *)(this + 0x208),param_1);
  return;
}


/* ComponentDamageTossRadius::~ComponentDamageTossRadius() */

void __thiscall
ComponentDamageTossRadius::~ComponentDamageTossRadius(ComponentDamageTossRadius *this)

{
  *(undefined ***)this = &PTR_GetClass_06735ff0;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x300));
  ComponentDamageTossRadiusProps::~ComponentDamageTossRadiusProps
            ((ComponentDamageTossRadiusProps *)(this + 0x208));
  ComponentDamageRadius::~ComponentDamageRadius((ComponentDamageRadius *)this);
  return;
}


/* ComponentDamageTossRadius::~ComponentDamageTossRadius() */

void __thiscall
ComponentDamageTossRadius::~ComponentDamageTossRadius(ComponentDamageTossRadius *this)

{
  ~ComponentDamageTossRadius(this);
  AK::FreeHook(this);
  return;
}

