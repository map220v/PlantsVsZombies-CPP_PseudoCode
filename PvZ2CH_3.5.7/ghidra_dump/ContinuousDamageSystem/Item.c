// Class: ContinuousDamageSystem::Item


/* ContinuousDamageSystem::Item::Item() */

void __thiscall ContinuousDamageSystem::Item::Item(Item *this)

{
  undefined4 uVar1;
  
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo((ResistenceValueInfo *)this);
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  uVar1 = operator|(2,4);
  *(undefined4 *)(this + 0x18) = uVar1;
  *(undefined4 *)(this + 0x1c) = 2;
  return;
}


/* ContinuousDamageSystem::Item::Item(float, float, Sexy::SexyVector2 const&, float) */

void __thiscall
ContinuousDamageSystem::Item::Item
          (Item *this,float param_1,float param_2,SexyVector2 *param_3,float param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo((ResistenceValueInfo *)this);
  *(undefined4 *)(this + 0x14) = 0;
  uVar1 = operator|(2,4);
  uVar2 = *(undefined8 *)param_3;
  *(undefined4 *)(this + 0x18) = uVar1;
  *(undefined8 *)this = uVar2;
  *(undefined4 *)(this + 0x1c) = 2;
  *(float *)(this + 0x10) = param_2;
  *(float *)(this + 8) = param_4;
  *(float *)(this + 0xc) = param_1;
  uVar1 = PVZ_T();
  *(undefined4 *)(this + 0x14) = uVar1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ContinuousDamageSystem::Item::ApplyDamage() */

void __thiscall ContinuousDamageSystem::Item::ApplyDamage(Item *this)

{
  char cVar1;
  float *pfVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  Zombie *pZVar6;
  ulong uVar7;
  undefined8 uVar8;
  long *plVar9;
  code *pcVar10;
  float fVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  Point aPStack_90 [8];
  undefined4 local_88;
  undefined4 local_84;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 local_68 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_68[0] = PVZ_T();
  pfVar2 = eastl::min_alt<float>((float *)local_68,(float *)(this + 0x10));
  fVar14 = *(float *)(this + 0x14);
  fVar11 = *pfVar2;
  if (0.0 < fVar11 - fVar14) {
    uVar12 = PVZ_T();
    fVar13 = *(float *)(this + 0xc);
    *(undefined4 *)(this + 0x14) = uVar12;
    uVar7 = 0;
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_80);
    EntityFinder::GetEntitiesTouchingCircle2D
              (*(undefined4 *)(this + 8),
               (vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_80,
               *(undefined4 *)(this + 0x18),this,0xffffffff,0xffffffff);
    uVar8 = local_80;
    lVar3 = FUN_0408676c(local_80,local_78);
    if (lVar3 != 0) {
      do {
        puVar4 = (undefined8 *)FUN_04086778(uVar8,uVar7);
        cVar1 = RealObject::IsOnTeam(*puVar4,*(undefined4 *)(this + 0x1c));
        if (cVar1 != '\0') {
          puVar4 = (undefined8 *)FUN_04086778(local_80,uVar7);
          pZVar6 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar4);
          if ((pZVar6 == (Zombie *)0x0) ||
             (cVar1 = (**(code **)(*(long *)pZVar6 + 0xb8))(pZVar6,7), cVar1 != '\0')) {
            puVar4 = (undefined8 *)FUN_04086778(local_80,uVar7);
            plVar9 = (long *)*puVar4;
            pcVar10 = *(code **)(*plVar9 + 0x110);
            Sexy::Point::Point(aPStack_90,-1,-1);
            Sexy::FastCurve::SetOutRange((FastCurve *)&local_88,1.0,0.0);
            DamageInfo::DamageInfo
                      ((DamageInfo *)((fVar11 - fVar14) * fVar13),local_88,local_84,
                       (DamageInfo *)local_68,aPStack_90,0);
            (*pcVar10)(plVar9,(DamageInfo *)local_68);
            DamageInfo::~DamageInfo((DamageInfo *)local_68);
          }
        }
        uVar8 = local_80;
        uVar7 = uVar7 + 1;
        uVar5 = FUN_0408676c(local_80,local_78);
      } while (uVar7 < uVar5);
    }
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_80);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

