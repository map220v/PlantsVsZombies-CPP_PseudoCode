// Class: PeashooterPlantfood


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PeashooterPlantfood::Update(Plant*, Sexy::SexyVector3 const&, float, PlantAction const&) */

void __thiscall
PeashooterPlantfood::Update
          (PeashooterPlantfood *this,Plant *param_1,SexyVector3 *param_2,float param_3,
          PlantAction *param_4)

{
  bool bVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  int *piVar6;
  long lVar7;
  undefined8 uVar8;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  undefined8 *puVar9;
  float *pfVar10;
  RtWeakPtrBase *pRVar11;
  wchar_t *pwVar12;
  int iVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  Board *pBVar20;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  wchar_t *local_b8;
  wchar_t *local_a8;
  float local_58;
  float local_54;
  undefined8 local_50;
  float local_48;
  undefined8 local_40;
  float local_38;
  SexyTransform2D local_30 [40];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar14 = (float)PVZ_T();
  local_40 = CONCAT44(local_40._4_4_,*(int *)(this + 0xc) - *(int *)(this + 8));
  local_50 = CONCAT44(local_50._4_4_,
                      (int)((fVar14 - *(float *)(this + 4)) * *(float *)this) - *(int *)(this + 8));
  piVar6 = eastl::min_alt<int>((int *)&local_50,(int *)&local_40);
  iVar2 = *piVar6;
  if (0 < iVar2) {
    pBVar20._0_4_ = (Board *)(*(float *)param_2 + *(float *)(param_4 + 0x68) * param_3);
    fVar14 = *(float *)(param_2 + 8) - *(float *)(param_4 + 0x6c) * param_3;
    uVar17 = *(undefined4 *)(param_2 + 4);
    Sexy::SexyTransform2D::SexyTransform2D(local_30);
    fVar18 = *(float *)(this + 0x14);
    cVar3 = Sexy::IsNearZero(fVar18,0.001);
    bVar1 = cVar3 == '\0';
    if (bVar1) {
      Sexy::SexyTransform2D::CreateRotation((SexyTransform2D *)0x0,fVar18);
    }
    iVar13 = 0;
    local_a8 = L"FirePeaDefault";
    local_b8 = L"UltraFirePeaDefault";
    do {
      Plant::GetType();
      lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
      bVar4 = std::operator==((string *)(lVar7 + 8),"repeater");
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
      if (bVar4) {
        fVar18 = (float)Sexy::Rand(1.0);
        iVar5 = FUN_03fdc148(*(undefined4 *)(param_1 + 0x50));
        if (iVar5 < 3) {
          fVar19 = 0.15;
          fVar16 = 0.16666667;
        }
        else {
          fVar19 = 0.083333336;
          fVar16 = 0.25;
        }
        cVar3 = Plant::GetAvatarEnable(param_1);
        if ((cVar3 == '\0') && (iVar5 = FUN_03fdc148(*(undefined4 *)(param_1 + 0x50)), iVar5 < 2)) {
          uVar8 = *(undefined8 *)(gLawnApp + 0x9f0);
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                    ((RtWeakPtr<Sexy::SoundResource> *)&local_40,(RtWeakPtrBase *)(param_4 + 8));
          this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                     *)Board::AddProjectile
                                 (pBVar20._0_4_,uVar17,fVar14,uVar8,
                                  (RtWeakPtr<Sexy::ResourceInfo> *)&local_40,param_1,0);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
        }
        else {
          cVar3 = Plant::GetAvatarEnable(param_1);
          if (cVar3 == '\0') {
            iVar5 = FUN_03fdc148(*(undefined4 *)(param_1 + 0x50));
            if (2 < iVar5) {
              if (fVar16 <= fVar18) {
                if (fVar18 < fVar16 + fVar16) goto LAB_03fdebcc;
                if (fVar18 < fVar16 + fVar16 + fVar19) goto LAB_03fdec10;
                goto LAB_03fdec60;
              }
LAB_03fde844:
              std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::
              _Hash_node((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_58
                        );
              uVar8 = Sexy::LazySingleton<PVZDB>::GetInstance();
              pwVar12 = local_a8;
              goto LAB_03fde860;
            }
            if (fVar18 < fVar16) goto LAB_03fde844;
            if (fVar18 < fVar16 + fVar16) goto LAB_03fdebcc;
LAB_03fdec60:
            std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::
            _Hash_node((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_58);
            pRVar11 = (RtWeakPtrBase *)(param_4 + 8);
          }
          else {
            iVar5 = FUN_03fdc148(*(undefined4 *)(param_1 + 0x50));
            if (iVar5 != 2) {
              if (iVar5 < 3) {
                if (0.15 <= fVar18) {
                  if (0.3 <= fVar18) {
                    if (fVar18 < 0.45000002) goto LAB_03fdec10;
                    goto LAB_03fdec60;
                  }
                  goto LAB_03fdebcc;
                }
              }
              else {
                fVar15 = fVar16 + 0.15;
                if (fVar15 <= fVar18) {
                  if (fVar15 + fVar15 <= fVar18) {
                    fVar15 = fVar16 + fVar19 + 0.3 + fVar15;
                    goto joined_r0x03fdec5c;
                  }
LAB_03fdebcc:
                  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::
                  _Hash_node((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)
                             &local_58);
                  uVar8 = Sexy::LazySingleton<PVZDB>::GetInstance();
                  pwVar12 = L"SnowPeaDefault";
                  goto LAB_03fde860;
                }
              }
              goto LAB_03fde844;
            }
            fVar15 = fVar16 + 0.15;
            if (fVar18 < fVar15) goto LAB_03fde844;
            if (fVar18 < fVar15 + fVar15) goto LAB_03fdebcc;
            fVar15 = fVar16 + 0.3 + fVar15;
joined_r0x03fdec5c:
            if (fVar15 <= fVar18) goto LAB_03fdec60;
LAB_03fdec10:
            std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::
            _Hash_node((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_58);
            uVar8 = Sexy::LazySingleton<PVZDB>::GetInstance();
            pwVar12 = local_b8;
LAB_03fde860:
            Sexy::RtName::RtName((RtName *)&local_40,pwVar12);
            PVZDB::FindObjectByAlias<DragonBabyBruitProps>
                      ((RtWeakPtr<Sexy::ResourceInfo> *)&local_50,uVar8,0xc,
                       (RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
            Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                      ((RtWeakPtr<PowerPropertySheet> *)&local_58,(RtWeakPtr *)&local_50);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)&local_50);
            Sexy::RtName::~RtName((RtName *)&local_40);
            pRVar11 = (RtWeakPtrBase *)&local_58;
          }
          uVar8 = *(undefined8 *)(gLawnApp + 0x9f0);
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                    ((RtWeakPtr<Sexy::SoundResource> *)&local_40,pRVar11);
          this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                     *)Board::AddProjectile
                                 (pBVar20._0_4_,uVar17,fVar14,uVar8,
                                  (RtWeakPtr<Sexy::ResourceInfo> *)&local_40,param_1,0);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_58);
        }
      }
      else {
        uVar8 = *(undefined8 *)(gLawnApp + 0x9f0);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)&local_40,(RtWeakPtrBase *)(param_4 + 8));
        this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                   *)Board::AddProjectile
                               (pBVar20._0_4_,uVar17,fVar14,uVar8,
                                (RtWeakPtr<Sexy::ResourceInfo> *)&local_40,param_1,0);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
      }
      uVar8 = FUN_03fdc120(*(undefined8 *)(this_00 + 0xe0));
      uVar8 = operator|(uVar8,0x2000);
      FUN_03fdc124(this_00 + 0xe0,uVar8);
      Plant::GetType();
      lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
      bVar4 = std::operator==((string *)(lVar7 + 8),"bitpeashooter");
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
      if (bVar4) {
        FUN_03fdc468(this_00 + 400);
        fVar18 = (float)FUN_03fdc134(*(undefined4 *)(this_00 + 0xd8));
        FUN_03fdc138(fVar18 + *(float *)(this + 0x18),this_00 + 0xd8);
      }
      else {
        FUN_03fdc140(*(undefined4 *)(this + 0x18),this_00 + 0x184);
      }
      puVar9 = (undefined8 *)
               std::
               _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               ::_M_leftmost(this_00);
      local_50 = *puVar9;
      local_48 = *(float *)(puVar9 + 1);
      fVar18 = sinf((float)*(int *)(this + 8) * 10.0);
      fVar16 = fVar18 * 5.0;
      Sexy::FastCurve::SetOutRange((FastCurve *)&local_58,0.0,fVar16);
      if (bVar1) {
        local_58 = (float)Sexy::PopTransformMatrix::operator*
                                    ((PopTransformMatrix *)local_30,(SexyVector2 *)&local_58);
        local_54 = fVar16;
      }
      local_48 = local_48 - fVar18 * 10.0;
      local_50 = CONCAT44(local_54 + local_50._4_4_,local_58 + (float)local_50);
      (**(code **)(*(long *)this_00 + 0x78))(this_00,(RtWeakPtr<Sexy::ResourceInfo> *)&local_50);
      if (bVar1) {
        Projectile::ApplyRotationToVelocity((SexyTransform2D *)this_00);
      }
      pfVar10 = (float *)Projectile::GetVelocityScale((Projectile *)this_00);
      local_40 = *(undefined8 *)pfVar10;
      local_38 = pfVar10[2];
      fVar18 = (float)Sexy::Rand(0.7);
      local_40 = CONCAT44(local_40._4_4_,(fVar18 + 1.0) * (float)local_40);
      Projectile::SetVelocityScale((Projectile *)this_00,(SexyVector3 *)&local_40);
      if (this[0x10] != (PeashooterPlantfood)0x0) {
        fVar18 = *pfVar10;
        Projectile::SetVelocityScale((Projectile *)this_00,-fVar18,pfVar10[1],pfVar10[2]);
        FUN_03fdc12c(this_00 + 0xd4,0.0 < fVar18);
      }
      iVar13 = iVar13 + 1;
      *(int *)(this + 8) = *(int *)(this + 8) + 1;
    } while (iVar13 != iVar2);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

