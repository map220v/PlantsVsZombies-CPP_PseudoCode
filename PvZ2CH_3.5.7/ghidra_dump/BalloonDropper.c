// Class: BalloonDropper


/* BalloonDropper::TargetIsValid(BoardEntity*) */

byte BalloonDropper::TargetIsValid(BoardEntity *param_1)

{
  char cVar1;
  byte bVar2;
  Zombie *this;
  Plant *pPVar3;
  
  if (param_1 != (BoardEntity *)0x0) {
    this = Sexy::RtObject::Cast<Zombie>((RtObject *)param_1);
    if (this == (Zombie *)0x0) {
      pPVar3 = Sexy::RtObject::Cast<Plant>((RtObject *)param_1);
      if ((pPVar3 != (Plant *)0x0) && (0.0 < *(float *)(pPVar3 + 0xd8))) {
        bVar2 = Plant::HasCondition(pPVar3,0x1b);
        return bVar2 ^ 1;
      }
    }
    else {
      cVar1 = (**(code **)(*(long *)this + 0x328))();
      if ((((cVar1 == '\0') && (cVar1 = (**(code **)(*(long *)this + 0x330))(this), cVar1 == '\0'))
          && (cVar1 = Zombie::IsInvisible(this), cVar1 == '\0')) &&
         (cVar1 = BoardEntity::IsOnScreen((BoardEntity *)this), cVar1 != '\0')) {
        bVar2 = Zombie::HasCondition(this,0x68);
        return bVar2 ^ 1;
      }
    }
  }
  return 0;
}


/* BalloonDropper::BalloonDropper() */

void __thiscall BalloonDropper::BalloonDropper(BalloonDropper *this)

{
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x10));
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  return;
}


/* BalloonDropper::~BalloonDropper() */

void __thiscall BalloonDropper::~BalloonDropper(BalloonDropper *this)

{
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::~vector
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             (this + 0x10));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BalloonDropper::Update() */

void BalloonDropper::Update(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int *piVar3;
  long lVar4;
  int iVar5;
  undefined8 in_x2;
  float fVar6;
  float fVar7;
  uint local_60;
  int local_5c;
  float local_58;
  float local_54;
  int local_50;
  int local_4c;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_48 [8];
  string asStack_40 [8];
  wstring awStack_38 [8];
  undefined8 local_30;
  undefined4 local_28;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Point::Point((Point *)&local_60);
  local_60 = 0xffffffff;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  local_30._0_4_ = 1.4013e-45;
  do {
    std::vector<int,std::allocator<int>>::push_back
              ((vector<int,std::allocator<int>> *)avStack_20,(int *)&local_30);
    iVar5 = (int)in_x2;
    local_30._0_4_ = (float)((int)(float)local_30 + 1);
  } while ((int)(float)local_30 < 0x2e);
  uVar1 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)avStack_20);
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)avStack_20);
  std::random_shuffle<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
            (uVar1,uVar2);
  local_30 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  piVar3 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
  if (*piVar3 < 2) {
    local_60 = 0;
  }
  else {
    local_30 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_20);
    piVar3 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
    if (*piVar3 < 4) {
      local_60 = 1;
    }
    else {
      local_30 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)avStack_20);
      piVar3 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
      if (*piVar3 < 7) {
        local_60 = 2;
      }
      else {
        local_30 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                            *)avStack_20);
        piVar3 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
        if (*piVar3 < 0xb) {
          local_60 = 3;
        }
        else {
          local_30 = std::
                     vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                              *)avStack_20);
          piVar3 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
          if (*piVar3 < 0x10) {
            local_60 = 4;
          }
          else {
            local_30 = std::
                       vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                                *)avStack_20);
            piVar3 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
            if (*piVar3 < 0x16) {
              local_60 = 5;
            }
            else {
              local_30 = std::
                         vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                                  *)avStack_20);
              piVar3 = (int *)std::__exception_ptr::exception_ptr::_M_get
                                        ((exception_ptr *)&local_30);
              if (*piVar3 < 0x1d) {
                local_60 = 6;
              }
              else {
                local_30 = std::
                           vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                           ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                                    *)avStack_20);
                piVar3 = (int *)std::__exception_ptr::exception_ptr::_M_get
                                          ((exception_ptr *)&local_30);
                if (*piVar3 < 0x25) {
                  local_60 = 7;
                }
                else {
                  local_60 = 8;
                }
              }
            }
          }
        }
      }
    }
  }
  local_5c = Sexy::Rand(*(int *)(*(long *)(gLawnApp + 0x9f0) + 0xfc));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)avStack_20);
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_58,0.0,0.0);
  BoardTransforms::GridToBoardSpacePos((BoardTransforms *)(ulong)local_60,local_5c,iVar5);
  EATextSquish::Vec3::Vec3((Vec3 *)&local_30,0.0,0.0,600.0);
  uVar1 = Sexy::LazySingleton<PVZDB>::GetInstance();
  std::string::string(asStack_40,"ThemeBalloonDefault");
  Sexy::ToWString(asStack_40);
  Sexy::RtName::RtName((RtName *)avStack_20,awStack_38);
  PVZDB::FindObjectByAlias<DragonBabyBruitProps>(aRStack_48,uVar1,0xc,avStack_20);
  Sexy::RtName::~RtName((RtName *)avStack_20);
  FUN_05476c50(awStack_38);
  std::string::~string(asStack_40);
  nop();
  uVar1 = *(undefined8 *)(gLawnApp + 0x9f0);
  fVar6 = local_58 + (float)local_30;
  fVar7 = local_54 + local_30._4_4_;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)avStack_20,(RtWeakPtrBase *)aRStack_48);
  lVar4 = Board::AddProjectile
                    ((Board *)(fVar6 + (float)local_50),fVar7 + (float)local_4c,local_28,uVar1,
                     avStack_20,0,0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)avStack_20);
  FUN_036f76ac(lVar4 + 0x24);
  FUN_036f769c(lVar4 + 0x178);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_48);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

