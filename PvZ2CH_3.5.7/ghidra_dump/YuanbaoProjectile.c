// Class: YuanbaoProjectile


/* YuanbaoProjectile::~YuanbaoProjectile() */

void __thiscall YuanbaoProjectile::~YuanbaoProjectile(YuanbaoProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_0663b4c0;
  *(undefined ***)(this + 0x10) = &PTR__YuanbaoProjectile_0663b6b0;
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to YuanbaoProjectile::~YuanbaoProjectile() */

void __thiscall YuanbaoProjectile::~YuanbaoProjectile(YuanbaoProjectile *this)

{
  ~YuanbaoProjectile(this + -0x10);
  return;
}


/* YuanbaoProjectile::~YuanbaoProjectile() */

void __thiscall YuanbaoProjectile::~YuanbaoProjectile(YuanbaoProjectile *this)

{
  ~YuanbaoProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to YuanbaoProjectile::~YuanbaoProjectile() */

void __thiscall YuanbaoProjectile::~YuanbaoProjectile(YuanbaoProjectile *this)

{
  ~YuanbaoProjectile(this + -0x10);
  return;
}


/* YuanbaoProjectile::YuanbaoProjectile() */

void __thiscall YuanbaoProjectile::YuanbaoProjectile(YuanbaoProjectile *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined ***)this = &PTR_GetClass_0663b4c0;
  *(undefined ***)(this + 0x10) = &PTR__YuanbaoProjectile_0663b6b0;
  return;
}


/* YuanbaoProjectile::StaticNew() */

YuanbaoProjectile * YuanbaoProjectile::StaticNew(void)

{
  YuanbaoProjectile *this;
  
  this = ::operator_new(0x1a8);
  YuanbaoProjectile(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* YuanbaoProjectile::StaticClassInit() */

void YuanbaoProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"YuanbaoProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_0346fcac,0x1a8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* YuanbaoProjectile::StaticGetClass() */

long * YuanbaoProjectile::StaticGetClass(void)

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
  uVar2 = Projectile::StaticGetClass();
  (*pcVar3)(plVar1,"YuanbaoProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* YuanbaoProjectile::GetClass() const */

long * YuanbaoProjectile::GetClass(void)

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
  uVar2 = Projectile::StaticGetClass();
  (*pcVar3)(plVar1,"YuanbaoProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* YuanbaoProjectile::handleImpact(BoardEntity*) */

void __thiscall YuanbaoProjectile::handleImpact(YuanbaoProjectile *this,BoardEntity *param_1)

{
  int iVar1;
  char cVar2;
  long lVar3;
  Plant *pPVar4;
  BoardTransforms *pBVar5;
  Effect_PopAnim *this_00;
  ResourceInfo *pRVar6;
  long lVar7;
  char *__s;
  RtObject *pRVar8;
  float *pfVar9;
  Board *pBVar10;
  float extraout_s0;
  float fVar11;
  string asStack_38 [8];
  int local_30;
  int local_2c;
  float local_28;
  float local_24;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0x170))();
  lVar3 = Projectile::getProps((Projectile *)this);
  if (param_1 == (BoardEntity *)0x0) {
    pBVar5 = (BoardTransforms *)
             std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                       ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
    BoardTransforms::BoardSpaceToGrid(pBVar5,*(float *)(this + 0x18),*(float *)(this + 0x1c));
    EntityFinder::GetEntitiesAtGridSquare
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20,4,local_30
               ,local_2c);
    lVar3 = FUN_0346f454(local_20,local_18);
    if (lVar3 == 0) {
      pBVar10 = *(Board **)(gLawnApp + 0x9f0);
      std::string::string((string *)&local_28,"yuanbao");
      pRVar8 = (RtObject *)Board::AddGridItem(pBVar10,(string *)&local_28,local_30,local_2c,1);
      Sexy::RtObject::Cast<GridItemYuanbao>(pRVar8);
      std::string::~string((string *)&local_28);
      nop();
    }
    cVar2 = '\x01';
    (**(code **)(*(long *)this + 0x48))(this);
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  }
  else {
    pPVar4 = Sexy::RtObject::Cast<Plant>((RtObject *)param_1);
    if ((pPVar4 == (Plant *)0x0) ||
       (pBVar5 = (BoardTransforms *)FUN_0346f44c(*(undefined4 *)(pPVar4 + 0xd8)),
       *(float *)(lVar3 + 0x18) < extraout_s0)) {
      (**(code **)(*(long *)this + 0x180))(asStack_38,this);
      cVar2 = FUN_0547419c(asStack_38);
      if (cVar2 == '\0') {
        GetPAMByName(asStack_38);
        cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)&local_30);
        if (cVar2 != '\0') {
          ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
                    ((ResistenceValueInfo *)&local_28);
          Projectile::calcRandomSplatOffset((Projectile *)this,(SexyVector2 *)&local_28);
          if (*(char *)(lVar3 + 0x6d) == '\0') {
            local_28 = local_28 + *(float *)(this + 0x18);
            fVar11 = (local_24 + *(float *)(this + 0x1c)) - *(float *)(this + 0x20);
          }
          else {
            pfVar9 = (float *)std::
                              _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                              ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                             *)param_1);
            local_28 = local_28 + *pfVar9;
            fVar11 = (local_24 + pfVar9[1]) - pfVar9[2];
          }
          CardGameUtils::IsPlayingCardGame();
          this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
          pRVar6 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_30);
          Effect_PopAnim::CreatePopAnimRig(this_00,(PopAnim *)pRVar6,(RtClass *)0x0);
          Effect_PopAnim::SetCentered(this_00,true);
          (**(code **)(*(long *)this_00 + 0x80))(0x3f800000,this_00);
          EATextSquish::Vec3::Vec3((Vec3 *)&local_20,local_28,fVar11,0.0);
          StandaloneEffect::SetBoardSpaceOrigin
                    ((StandaloneEffect *)this_00,(SexyVector3 *)&local_20,-1);
          FUN_0346f440(this_00 + 0x1c,*(int *)(this + 0x50) + 1);
          lVar7 = Projectile::getProps((Projectile *)this);
          __s = (char *)FUN_0547429c(lVar7 + 0x148);
          std::string::string((string *)&local_20,__s);
          Effect_PopAnim::PlaySingleAnimation(this_00,(Vec3 *)&local_20,2);
          std::string::~string((string *)&local_20);
          nop();
        }
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_30);
      }
      if (((*(int *)(this + 0x4c) < 1) ||
          (iVar1 = *(int *)(this + 0x4c) + -1, *(int *)(this + 0x4c) = iVar1, iVar1 == 0)) &&
         (cVar2 = *(char *)(lVar3 + 0x65), cVar2 != '\0')) {
        (**(code **)(*(long *)this + 0x48))(this);
      }
      else {
        cVar2 = '\0';
      }
      std::string::~string(asStack_38);
    }
    else {
      cVar2 = '\x01';
      BoardTransforms::BoardSpaceToGrid(pBVar5,*(float *)(this + 0x18),*(float *)(this + 0x1c));
      pBVar10 = *(Board **)(gLawnApp + 0x9f0);
      std::string::string((string *)&local_20,"yuanbao");
      pRVar8 = (RtObject *)
               Board::AddGridItem(pBVar10,(string *)&local_20,(int)local_28,(int)local_24,1);
      Sexy::RtObject::Cast<GridItemYuanbao>(pRVar8);
      std::string::~string((string *)&local_20);
      nop();
      (**(code **)(*(long *)this + 0x48))(this);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar2);
}

