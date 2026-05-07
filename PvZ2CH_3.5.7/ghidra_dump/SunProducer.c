// Class: SunProducer


/* SunProducer::SunProducer(BoardEntity&, PowerPropsSunProducer const&, Sexy::SexyVector2) */

void __thiscall
SunProducer::SunProducer
          (undefined4 param_1_00,undefined4 param_2_00,SunProducer *this,undefined8 param_1,
          undefined8 param_2)

{
  *(undefined8 *)(this + 8) = param_1;
  *(undefined8 *)(this + 0x10) = param_2;
  *(undefined ***)this = &PTR_nop_067429c0;
  *(ulong *)(this + 0x18) = CONCAT44(param_2_00,param_1_00);
  return;
}


/* SunProducer::CanProduceSun() */

byte SunProducer::CanProduceSun(void)

{
  char cVar1;
  byte bVar2;
  Board *this;
  
  this = *(Board **)(gLawnApp + 0x9f0);
  cVar1 = Board::IsPlaying(this);
  bVar2 = 0;
  if (cVar1 != '\0') {
    bVar2 = Board::IsSunSpawningSuppressed(this);
    bVar2 = bVar2 ^ 1;
  }
  return bVar2;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SunProducer::Execute() */

void __thiscall SunProducer::Execute(SunProducer *this)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  Collectable *in_x2;
  int iVar4;
  string asStack_40 [8];
  float local_38;
  float fStack_34;
  float local_30;
  float local_28 [4];
  Vec3 aVStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = BoardHelpers::CanProduceSun();
  if ((cVar1 != '\0') && (iVar4 = *(int *)(*(long *)(this + 0x10) + 0x18), 0 < iVar4)) {
    do {
      Set8BytesTo0(asStack_40);
      if (iVar4 < 100) {
        if (iVar4 < 0x4b) {
          if (0x31 < iVar4) goto LAB_0449e48c;
          if (iVar4 < 0x19) {
            iVar4 = iVar4 + -5;
            std::string::append(asStack_40,"sun_small",(size_t)in_x2);
          }
          else {
            iVar4 = iVar4 + -0x19;
            std::string::append(asStack_40,"sun_medium",(size_t)in_x2);
          }
        }
        else {
          iVar4 = iVar4 + -0x4b;
          std::string::append(asStack_40,"sun_large",(size_t)in_x2);
        }
      }
      else {
LAB_0449e48c:
        iVar4 = iVar4 + -0x32;
        std::string::append(asStack_40,"sun",(size_t)in_x2);
      }
      in_x2 = (Collectable *)Board::AddCollectable(*(string **)(gLawnApp + 0x9f0));
      puVar3 = (undefined8 *)
               std::
               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                               **)(this + 8));
      local_38 = (float)*puVar3;
      local_30 = *(float *)(puVar3 + 1) - *(float *)(this + 0x1c);
      fStack_34 = (float)((ulong)*puVar3 >> 0x20);
      _local_38 = CONCAT44(fStack_34,*(float *)(this + 0x18) + local_38);
      DVec3::DVec3((DVec3 *)local_28);
      if (*(float *)(*(long *)(this + 0x10) + 0x1c) == 0.0) {
        local_28[0] = (float)Sexy::Rand(80.0);
        local_28[0] = local_28[0] - 40.0;
      }
      else {
        local_28[0] = (float)Sexy::Rand(80.0);
        if (40.0 <= local_28[0]) {
          local_28[0] = *(float *)(*(long *)(this + 0x10) + 0x1c) + -40.0 + local_28[0];
        }
        else {
          local_28[0] = -(local_28[0] + *(float *)(*(long *)(this + 0x10) + 0x1c));
        }
      }
      local_28[1] = 5.0;
      local_28[2] = (float)Sexy::Rand(170.0);
      local_28[2] = local_28[2] + 170.0;
      iVar2 = SharkMinion::getRow(*(SharkMinion **)(this + 8));
      if (3 < iVar2) {
        _local_38 = CONCAT44(fStack_34 - 10.0,local_38);
        local_28[1] = 0.0;
      }
      (**(code **)(*(long *)in_x2 + 0x78))(in_x2,&local_38);
      EATextSquish::Vec3::Vec3(aVStack_18,0.0,0.0,-600.0);
      Collectable::SetMotionNewtonian(in_x2,(SexyVector3 *)local_28,(SexyVector3 *)aVStack_18,true);
      Collectable::StartExpirationTimerAfterMotion(in_x2);
      MessageRouter::Broadcast<CollectableSun*,CollectableSun*>
                ((MessageRouter *)gMessageRouter,Message::SunProducedByPlant,(CollectableSun *)in_x2
                );
      std::string::~string(asStack_40);
    } while (0 < iVar4);
    MessageRouter::Broadcast<BoardEntity*,BoardEntity*>
              ((MessageRouter *)gMessageRouter,Message::SunProductionTriggered,
               *(BoardEntity **)(this + 8));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

