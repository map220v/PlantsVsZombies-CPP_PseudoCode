// Class: VaseBreakerEndlessStage


/* VaseBreakerEndlessStage::VaseBreakerEndlessStage() */

void __thiscall VaseBreakerEndlessStage::VaseBreakerEndlessStage(VaseBreakerEndlessStage *this)

{
  *(undefined4 *)this = 0xffffffff;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x18));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x30));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x48));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x60));
  return;
}


/* VaseBreakerEndlessStage::~VaseBreakerEndlessStage() */

void __thiscall VaseBreakerEndlessStage::~VaseBreakerEndlessStage(VaseBreakerEndlessStage *this)

{
  std::
  vector<VaseBreakerEndlessEntityAndCountPair,std::allocator<VaseBreakerEndlessEntityAndCountPair>>
  ::~vector((vector<VaseBreakerEndlessEntityAndCountPair,std::allocator<VaseBreakerEndlessEntityAndCountPair>>
             *)(this + 0x60));
  std::
  vector<VaseBreakerEndlessEntityAndCountPair,std::allocator<VaseBreakerEndlessEntityAndCountPair>>
  ::~vector((vector<VaseBreakerEndlessEntityAndCountPair,std::allocator<VaseBreakerEndlessEntityAndCountPair>>
             *)(this + 0x48));
  std::
  vector<VaseBreakerEndlessEntityAndCountPair,std::allocator<VaseBreakerEndlessEntityAndCountPair>>
  ::~vector((vector<VaseBreakerEndlessEntityAndCountPair,std::allocator<VaseBreakerEndlessEntityAndCountPair>>
             *)(this + 0x30));
  std::
  vector<VaseBreakerEndlessEntityAndCountPair,std::allocator<VaseBreakerEndlessEntityAndCountPair>>
  ::~vector((vector<VaseBreakerEndlessEntityAndCountPair,std::allocator<VaseBreakerEndlessEntityAndCountPair>>
             *)(this + 0x18));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VaseBreakerEndlessStage::GetZombieTypesForEscalationCount(int, std::vector<std::string,
   std::allocator<std::string > >&) const */

void __thiscall
VaseBreakerEndlessStage::GetZombieTypesForEscalationCount
          (VaseBreakerEndlessStage *this,int param_1,vector *param_2)

{
  ulong uVar1;
  long lVar2;
  string *psVar3;
  int *piVar4;
  undefined8 uVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  uVar10 = 0;
  while( true ) {
    uVar8 = *(undefined8 *)(this + 0x60);
    uVar1 = FUN_0497f18c(uVar8,*(undefined8 *)(this + 0x68));
    uVar5 = local_20;
    if (uVar1 <= uVar10) break;
    lVar2 = FUN_0497f1b4(uVar8,uVar10);
    std::vector<int,std::allocator<int>>::push_back
              ((vector<int,std::allocator<int>> *)&local_20,(int *)(lVar2 + 8));
    uVar10 = uVar10 + 1;
  }
  if (param_1 < 1) {
    lVar2 = FUN_0497eff0(local_20,local_18);
  }
  else {
    lVar2 = FUN_0497eff0(local_20,local_18);
    do {
      param_1 = param_1 + -1;
      lVar9 = 1;
      for (lVar7 = 0; (int)lVar7 < (int)lVar2 + -1; lVar7 = lVar7 + 1) {
        piVar4 = (int *)FUN_0497f17c(uVar5,lVar7);
        if (0 < *piVar4) {
          *piVar4 = *piVar4 + -1;
          piVar4 = (int *)FUN_0497f17c(uVar5,lVar9);
          *piVar4 = *piVar4 + 1;
        }
        lVar9 = lVar9 + 1;
      }
    } while (param_1 != 0);
  }
  uVar10 = 0;
  if (lVar2 != 0) {
    do {
      for (iVar6 = 0; piVar4 = (int *)FUN_0497f17c(uVar5,uVar10), iVar6 < *piVar4; iVar6 = iVar6 + 1
          ) {
        psVar3 = (string *)FUN_0497f1b4(*(undefined8 *)(this + 0x60),uVar10);
        std::vector<std::string,std::allocator<std::string>>::push_back
                  ((vector<std::string,std::allocator<std::string>> *)param_2,psVar3);
        uVar5 = local_20;
      }
      uVar10 = uVar10 + 1;
      uVar1 = FUN_0497eff0(uVar5,local_18);
    } while (uVar10 < uVar1);
  }
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)&local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* VaseBreakerEndlessStage::VaseBreakerEndlessStage(VaseBreakerEndlessStage&&) */

void __thiscall
VaseBreakerEndlessStage::VaseBreakerEndlessStage
          (VaseBreakerEndlessStage *this,VaseBreakerEndlessStage *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar1 = *(undefined4 *)param_1;
  uVar2 = *(undefined4 *)(param_1 + 4);
  uVar3 = *(undefined4 *)(param_1 + 8);
  uVar4 = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)this = uVar1;
  *(undefined4 *)(this + 4) = uVar2;
  *(undefined4 *)(this + 8) = uVar3;
  *(undefined4 *)(this + 0xc) = uVar4;
  std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
            ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)
             (this + 0x18),(vector *)(param_1 + 0x18));
  std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
            ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)
             (this + 0x30),(vector *)(param_1 + 0x30));
  std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
            ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)
             (this + 0x48),(vector *)(param_1 + 0x48));
  std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>::vector
            ((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>> *)
             (this + 0x60),(vector *)(param_1 + 0x60));
  return;
}

