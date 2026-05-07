// Class: EventZombieWaveData


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EventZombieWaveData::ZombieSpawn(Board*, int) */

void __thiscall
EventZombieWaveData::ZombieSpawn(EventZombieWaveData *this,Board *param_1,int param_2)

{
  RtWeakPtr<PowerPropertySheet> *this_00;
  RtWeakPtrBase *pRVar1;
  long lVar2;
  Zombie *this_01;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (0 < param_2) {
    iVar3 = *(int *)(this + 0x28);
    *(int *)(this + 4) = *(int *)(this + 4) + -1;
    if (iVar3 != *(int *)(this + 0x2c)) {
      uVar5 = *(undefined8 *)(this + 0x10);
      iVar4 = 0;
      do {
        pRVar1 = (RtWeakPtrBase *)FUN_044f45a4(uVar5,(long)iVar3);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)a_Stack_10,pRVar1);
        lVar2 = FUN_044f45a4(*(undefined8 *)(this + 0x10),(long)*(int *)(this + 0x28));
        this_01 = (Zombie *)
                  Board::AddZombieInRow
                            (param_1,a_Stack_10,*(undefined4 *)(lVar2 + 8),0xfffffffb,0,1,1);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10)
        ;
        FUN_044f45a4(*(undefined8 *)(this + 0x10),(long)*(int *)(this + 0x28));
        Zombie::SetHasPlantFood(SUB81(this_01,0));
        if (*(int *)(this + 0x2c) == -1) {
          iVar3 = *(int *)this;
          *(undefined4 *)(this + 0x2c) = *(undefined4 *)(this + 0x28);
        }
        else {
          iVar3 = *(int *)this;
        }
        if (iVar3 == 1) {
          Zombie::SetStormType(this_01,0);
          lVar2 = FUN_044f45a4(*(undefined8 *)(this + 0x10),(long)*(int *)(this + 0x28));
          Zombie::StormEntrance(this_01,*(int *)(lVar2 + 0xc),*(int *)(lVar2 + 8));
        }
        iVar4 = iVar4 + 1;
        this_00 = (RtWeakPtr<PowerPropertySheet> *)
                  FUN_044f45a4(*(undefined8 *)(this + 0x10),(long)*(int *)(this + 0x28));
        std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                  (a_Stack_10);
        Sexy::RtWeakPtr<PowerPropertySheet>::operator=(this_00,(RtWeakPtr *)a_Stack_10);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10)
        ;
        uVar5 = *(undefined8 *)(this + 0x10);
        iVar3 = *(int *)(this + 0x28) + 1;
        lVar2 = FUN_044f45a4(uVar5,(long)*(int *)(this + 0x28));
        *(undefined1 *)(lVar2 + 0x10) = 0;
        if (iVar3 == 0x32) {
          iVar3 = 0;
        }
        *(int *)(this + 0x28) = iVar3;
      } while ((iVar4 != param_2) &&
              (*(int *)(this + 4) = *(int *)(this + 4) + -1, iVar3 != *(int *)(this + 0x2c)));
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* EventZombieWaveData::EventZombieWaveData() */

void __thiscall EventZombieWaveData::EventZombieWaveData(EventZombieWaveData *this)

{
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x10));
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  std::vector<EventZombieData,std::allocator<EventZombieData>>::clear
            ((vector<EventZombieData,std::allocator<EventZombieData>> *)(this + 0x10));
  return;
}


/* EventZombieWaveData::ZombieClear() */

void __thiscall EventZombieWaveData::ZombieClear(EventZombieWaveData *this)

{
  std::vector<EventZombieData,std::allocator<EventZombieData>>::clear
            ((vector<EventZombieData,std::allocator<EventZombieData>> *)(this + 0x10));
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  return;
}


/* EventZombieWaveData::~EventZombieWaveData() */

void __thiscall EventZombieWaveData::~EventZombieWaveData(EventZombieWaveData *this)

{
  std::vector<EventZombieData,std::allocator<EventZombieData>>::~vector
            ((vector<EventZombieData,std::allocator<EventZombieData>> *)(this + 0x10));
  return;
}


/* EventZombieWaveData::ZombieAdd(Sexy::RtWeakPtr<ZombieType const>, int, int, bool) */

void __thiscall
EventZombieWaveData::ZombieAdd
          (EventZombieWaveData *this,RtWeakPtr *param_2,undefined4 param_3,undefined4 param_4,
          undefined1 param_5)

{
  int iVar1;
  long lVar2;
  RtWeakPtr<PowerPropertySheet> *this_00;
  undefined8 uVar3;
  int iVar4;
  
  iVar4 = *(int *)(this + 0x2c);
  if (iVar4 != -1) {
    uVar3 = *(undefined8 *)(this + 0x10);
    lVar2 = FUN_044f4574(uVar3,*(undefined8 *)(this + 0x18));
    if (lVar2 == 0) {
      std::vector<EventZombieData,std::allocator<EventZombieData>>::resize
                ((vector<EventZombieData,std::allocator<EventZombieData>> *)(this + 0x10),0x32);
      iVar4 = *(int *)(this + 0x2c);
      uVar3 = *(undefined8 *)(this + 0x10);
    }
    this_00 = (RtWeakPtr<PowerPropertySheet> *)FUN_044f45a4(uVar3,(long)iVar4);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=(this_00,param_2);
    iVar4 = *(int *)(this + 0x2c);
    uVar3 = *(undefined8 *)(this + 0x10);
    lVar2 = FUN_044f45a4(uVar3,(long)iVar4);
    iVar1 = *(int *)(this + 0x28);
    *(undefined4 *)(lVar2 + 8) = param_3;
    *(undefined4 *)(lVar2 + 0xc) = param_4;
    *(undefined1 *)(lVar2 + 0x10) = 1;
    *(undefined1 *)(lVar2 + 0x11) = param_5;
    do {
      iVar4 = iVar4 + 1;
      if (iVar4 == 0x32) {
        iVar4 = 0;
        *(undefined4 *)(this + 0x2c) = 0;
        if (iVar1 == 0) {
LAB_044fd07c:
          *(undefined4 *)(this + 0x2c) = 0xffffffff;
          return;
        }
      }
      else {
        *(int *)(this + 0x2c) = iVar4;
        if (iVar1 == iVar4) goto LAB_044fd07c;
      }
      lVar2 = FUN_044f45a4(uVar3,(long)iVar4);
    } while (*(char *)(lVar2 + 0x10) != '\0');
  }
  return;
}


/* EventZombieWaveData::EventZombieWaveData(EventZombieWaveData&&) */

void __thiscall
EventZombieWaveData::EventZombieWaveData(EventZombieWaveData *this,EventZombieWaveData *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = *(undefined4 *)(param_1 + 8);
  uVar2 = *(undefined4 *)(param_1 + 0xc);
  uVar3 = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)this = uVar3;
  *(undefined4 *)(this + 8) = uVar1;
  *(undefined4 *)(this + 0xc) = uVar2;
  std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
            ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)
             (this + 0x10),(vector *)(param_1 + 0x10));
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(this + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(this + 0x28) = uVar1;
  return;
}

