// Class: GatlingPeaPlantfood


/* GatlingPeaPlantfood::GatlingPeaPlantfood() */

void __thiscall GatlingPeaPlantfood::GatlingPeaPlantfood(GatlingPeaPlantfood *this)

{
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined ***)this = &PTR_Update_067afe50;
  this[0x18] = (GatlingPeaPlantfood)0x0;
  *(undefined4 *)(this + 0x20) = 0x3f800000;
  return;
}


/* GatlingPeaPlantfood::SetRotation(float) */

void __thiscall GatlingPeaPlantfood::SetRotation(GatlingPeaPlantfood *this,float param_1)

{
  *(float *)(this + 0x1c) = param_1;
  return;
}


/* GatlingPeaPlantfood::Start(float, int, float) */

void __thiscall
GatlingPeaPlantfood::Start(GatlingPeaPlantfood *this,float param_1,int param_2,float param_3)

{
  undefined4 uVar1;
  
  *(float *)(this + 8) = (float)param_2 / param_1;
  uVar1 = PVZ_T();
  *(undefined4 *)(this + 0x10) = 0;
  *(int *)(this + 0x14) = param_2;
  *(undefined4 *)(this + 0xc) = uVar1;
  *(float *)(this + 0x20) = param_3;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GatlingPeaPlantfood::Update(Plant*, Sexy::SexyVector3 const&, float, PlantAction const&) */

void __thiscall
GatlingPeaPlantfood::Update
          (GatlingPeaPlantfood *this,Plant *param_1,SexyVector3 *param_2,float param_3,
          PlantAction *param_4)

{
  bool bVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined8 uVar7;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  undefined8 *puVar8;
  float *pfVar9;
  RtWeakPtrBase *pRVar10;
  wchar_t *pwVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  double dVar15;
  float fVar16;
  float fVar17;
  Board *pBVar21;
  undefined4 uVar18;
  float fVar19;
  float fVar20;
  wchar_t *local_c8;
  wchar_t *local_c0;
  int local_b4;
  float local_58;
  float local_54;
  undefined8 local_50;
  float local_48;
  ulong local_40;
  float local_38;
  SexyTransform2D local_30 [40];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar13 = (float)PVZ_T();
  local_40 = CONCAT44(local_40._4_4_,*(int *)(this + 0x14) - *(int *)(this + 0x10));
  local_50 = CONCAT44(local_50._4_4_,
                      (int)((fVar13 - *(float *)(this + 0xc)) * *(float *)(this + 8)) -
                      *(int *)(this + 0x10));
  piVar6 = eastl::min_alt<int>((int *)&local_50,(int *)&local_40);
  iVar2 = *piVar6;
  if (0 < iVar2) {
    pBVar21._0_4_ = (Board *)(*(float *)param_2 + *(float *)(param_4 + 0x68) * param_3);
    fVar17 = *(float *)(param_2 + 8) - *(float *)(param_4 + 0x6c) * param_3;
    uVar18 = *(undefined4 *)(param_2 + 4);
    Sexy::SexyTransform2D::SexyTransform2D(local_30);
    fVar13 = *(float *)(this + 0x1c);
    cVar3 = Sexy::IsNearZero(fVar13,0.001);
    bVar1 = cVar3 == '\0';
    if (bVar1) {
      Sexy::SexyTransform2D::CreateRotation((SexyTransform2D *)0x0,fVar13);
    }
    local_b4 = 0;
    local_c0 = L"FirePeaDefault";
    local_c8 = L"SnowPeaDefault";
    do {
      iVar4 = *(int *)(param_1 + 0x110);
      local_40 = local_40 & 0xffffffff00000000;
      local_50 = CONCAT44(local_50._4_4_,iVar4 + -1);
      piVar6 = eastl::max_alt<int>((int *)&local_50,(int *)&local_40);
      iVar12 = *piVar6;
      if ((iVar12 < *(int *)(*(long *)(gLawnApp + 0x9f0) + 0xfc)) && (iVar12 <= iVar4 + 1)) {
        do {
          cVar3 = Plant::GetAvatarEnable(param_1);
          if (cVar3 == '\0') {
            uVar7 = *(undefined8 *)(gLawnApp + 0x9f0);
            Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                      ((RtWeakPtr<Sexy::SoundResource> *)&local_40,(RtWeakPtrBase *)(param_4 + 8));
            this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                       *)Board::AddProjectile
                                   (pBVar21._0_4_,uVar18,fVar17,uVar7,(RtName *)&local_40,param_1,0)
            ;
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
          }
          else {
            fVar13 = (float)Sexy::Rand(1.0);
            iVar4 = FUN_03fdc148(*(undefined4 *)(param_1 + 0x50));
            if (iVar4 < 3) {
              fVar19 = 0.15;
              fVar16 = 0.16666667;
            }
            else {
              fVar19 = 0.083333336;
              fVar16 = 0.25;
            }
            cVar3 = Plant::GetAvatarEnable(param_1);
            if ((cVar3 == '\0') &&
               (iVar4 = FUN_03fdc148(*(undefined4 *)(param_1 + 0x50)), iVar4 < 2)) {
              uVar7 = *(undefined8 *)(gLawnApp + 0x9f0);
              Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                        ((RtWeakPtr<Sexy::SoundResource> *)&local_40,(RtWeakPtrBase *)(param_4 + 8))
              ;
              this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                         *)Board::AddProjectile
                                     (pBVar21._0_4_,uVar18,fVar17,uVar7,(RtName *)&local_40,param_1,
                                      0);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                        ((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
            }
            else {
              cVar3 = Plant::GetAvatarEnable(param_1);
              if (cVar3 == '\0') {
                iVar4 = FUN_03fdc148(*(undefined4 *)(param_1 + 0x50));
                if (2 < iVar4) {
                  if (fVar16 <= fVar13) {
                    if (fVar13 < fVar16 + fVar16) goto LAB_03fdef1c;
                    if (fVar13 < fVar16 + fVar16 + fVar19) {
                      std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>
                      ::_Hash_node((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *
                                   )&local_58);
                      iVar4 = FUN_03fdc148(*(undefined4 *)(param_1 + 0x50));
                      if (iVar4 != 5) goto LAB_03fdf18c;
LAB_03fdf41c:
                      uVar7 = Sexy::LazySingleton<PVZDB>::GetInstance();
                      pwVar11 = L"AvatarDamageBlueGatlingPeaDefault";
                      goto LAB_03fdef48;
                    }
                    goto LAB_03fdf1d4;
                  }
                  goto LAB_03fdf434;
                }
                if (fVar13 < fVar16) goto LAB_03fdf434;
                if (fVar13 < fVar16 + fVar16) {
                  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::
                  _Hash_node((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)
                             &local_58);
                  iVar4 = FUN_03fdc148(*(undefined4 *)(param_1 + 0x50));
                  goto joined_r0x03fdf500;
                }
LAB_03fdf1d4:
                std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::
                _Hash_node((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)
                           &local_58);
                pRVar10 = (RtWeakPtrBase *)(param_4 + 8);
              }
              else {
                iVar4 = FUN_03fdc148(*(undefined4 *)(param_1 + 0x50));
                if (iVar4 == 2) {
                  fVar14 = fVar16 + 0.15;
                  if (fVar13 < fVar14) goto LAB_03fdf434;
                  if (fVar13 < fVar14 + fVar14) goto LAB_03fdef1c;
                  fVar14 = fVar16 + 0.3 + fVar14;
joined_r0x03fdf1d0:
                  if (fVar14 <= fVar13) goto LAB_03fdf1d4;
LAB_03fdf170:
                  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::
                  _Hash_node((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)
                             &local_58);
                  iVar4 = FUN_03fdc148(*(undefined4 *)(param_1 + 0x50));
                  if (iVar4 == 5) goto LAB_03fdf41c;
LAB_03fdf18c:
                  uVar7 = Sexy::LazySingleton<PVZDB>::GetInstance();
                  pwVar11 = L"UltraFirePeaDefault";
                }
                else {
                  if (iVar4 < 3) {
                    if (0.15 <= fVar13) {
                      if (fVar13 < 0.3) goto LAB_03fdef1c;
                      if (fVar13 < 0.45000002) goto LAB_03fdf170;
                      std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>
                      ::_Hash_node((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *
                                   )&local_58);
                      pRVar10 = (RtWeakPtrBase *)(param_4 + 8);
                      goto LAB_03fdef88;
                    }
                  }
                  else {
                    fVar14 = fVar16 + 0.15;
                    if (fVar14 <= fVar13) {
                      if (fVar14 + fVar14 <= fVar13) {
                        fVar14 = fVar16 + fVar19 + 0.3 + fVar14;
                        goto joined_r0x03fdf1d0;
                      }
LAB_03fdef1c:
                      std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>
                      ::_Hash_node((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *
                                   )&local_58);
                      iVar4 = FUN_03fdc148(*(undefined4 *)(param_1 + 0x50));
joined_r0x03fdf500:
                      if (iVar4 == 5) {
                        uVar7 = Sexy::LazySingleton<PVZDB>::GetInstance();
                        pwVar11 = L"DamageBlueGatlingPeaDefault";
                      }
                      else {
                        uVar7 = Sexy::LazySingleton<PVZDB>::GetInstance();
                        pwVar11 = local_c8;
                      }
                      goto LAB_03fdef48;
                    }
                  }
LAB_03fdf434:
                  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::
                  _Hash_node((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)
                             &local_58);
                  iVar4 = FUN_03fdc148(*(undefined4 *)(param_1 + 0x50));
                  if (iVar4 == 5) {
                    uVar7 = Sexy::LazySingleton<PVZDB>::GetInstance();
                    pwVar11 = L"DamageFireGatlingPeaDefault";
                  }
                  else {
                    uVar7 = Sexy::LazySingleton<PVZDB>::GetInstance();
                    pwVar11 = local_c0;
                  }
                }
LAB_03fdef48:
                Sexy::RtName::RtName((RtName *)&local_40,pwVar11);
                PVZDB::FindObjectByAlias<DragonBabyBruitProps>
                          ((RtWeakPtr<Sexy::ResourceInfo> *)&local_50,uVar7,0xc,(RtName *)&local_40)
                ;
                Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                          ((RtWeakPtr<PowerPropertySheet> *)&local_58,(RtWeakPtr *)&local_50);
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                          ((RtWeakPtr<Sexy::ResourceInfo> *)&local_50);
                Sexy::RtName::~RtName((RtName *)&local_40);
                pRVar10 = (RtWeakPtrBase *)&local_58;
              }
LAB_03fdef88:
              uVar7 = *(undefined8 *)(gLawnApp + 0x9f0);
              Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                        ((RtWeakPtr<Sexy::SoundResource> *)&local_40,pRVar10);
              this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                         *)Board::AddProjectile
                                     (pBVar21._0_4_,uVar18,fVar17,uVar7,(RtName *)&local_40,param_1,
                                      0);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                        ((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                        ((RtWeakPtr<Sexy::ResourceInfo> *)&local_58);
            }
          }
          uVar7 = FUN_03fdc120(*(undefined8 *)(this_00 + 0xe0));
          uVar7 = operator|(uVar7,0x2000);
          FUN_03fdc124(this_00 + 0xe0,uVar7);
          FUN_03fdc140(*(undefined4 *)(this + 0x20),this_00 + 0x184);
          puVar8 = (undefined8 *)
                   std::
                   _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                   ::_M_leftmost(this_00);
          local_50 = *puVar8;
          local_48 = *(float *)(puVar8 + 1);
          dVar15 = sin((double)(*(int *)(this + 0x10) * 0xf));
          fVar16 = (float)dVar15;
          fVar19 = fVar16 * 10.0;
          fVar13 = fVar19;
          Sexy::FastCurve::SetOutRange((FastCurve *)&local_58,0.0,fVar19);
          if (bVar1) {
            local_58 = (float)Sexy::PopTransformMatrix::operator*
                                        ((PopTransformMatrix *)local_30,(SexyVector2 *)&local_58);
            local_54 = fVar13;
          }
          fVar13 = local_54;
          iVar4 = *(int *)(param_1 + 0x110);
          if (iVar12 < iVar4) {
            local_50._0_4_ = (float)local_50 + (fVar16 + 0.25) * 20.0;
            iVar5 = BoardConstants::GRIDSQUARE_HEIGHT();
            local_50 = CONCAT44(local_50._4_4_ + fVar13 + (float)((iVar12 - iVar4) * iVar5) * 0.8,
                                (float)local_50);
          }
          else if (iVar12 == iVar4 || iVar12 < iVar4) {
            if (iVar12 == iVar4) {
              fVar16 = (float)Sexy::Rand(120.0);
              iVar4 = Sexy::Rand(0xc);
              fVar13 = local_54;
              fVar14 = (float)iVar4;
              if (fVar16 - 60.0 <= 0.0) {
                fVar14 = -fVar14;
              }
              iVar4 = *(int *)(param_1 + 0x110);
              local_50._0_4_ = fVar14 + (float)local_50;
              iVar5 = BoardConstants::GRIDSQUARE_HEIGHT();
              local_50 = CONCAT44(fVar13 + local_50._4_4_ + fVar14 +
                                  (float)((iVar12 - iVar4) * iVar5),(float)local_50);
            }
          }
          else {
            fVar14 = (float)Sexy::Rand(120.0);
            iVar4 = Sexy::Rand(0x14);
            fVar13 = local_54;
            fVar20 = (float)iVar4;
            if (fVar14 - 60.0 <= 0.0) {
              fVar20 = -fVar20;
            }
            iVar4 = *(int *)(param_1 + 0x110);
            local_50._0_4_ = local_58 + (float)local_50 + fVar16 * 20.0;
            iVar5 = BoardConstants::GRIDSQUARE_HEIGHT();
            local_50 = CONCAT44(fVar13 + local_50._4_4_ + fVar20 + (float)((iVar12 - iVar4) * iVar5)
                                ,(float)local_50);
          }
          local_48 = local_48 - fVar19;
          (**(code **)(*(long *)this_00 + 0x78))(this_00,(RtWeakPtr<Sexy::ResourceInfo> *)&local_50)
          ;
          if (bVar1) {
            Projectile::ApplyRotationToVelocity((SexyTransform2D *)this_00);
          }
          pfVar9 = (float *)Projectile::GetVelocityScale((Projectile *)this_00);
          local_40 = *(ulong *)pfVar9;
          local_38 = pfVar9[2];
          fVar13 = (float)Sexy::Rand(0.7);
          local_40 = CONCAT44(local_40._4_4_,(fVar13 + 1.0) * (float)local_40);
          Projectile::SetVelocityScale((Projectile *)this_00,(SexyVector3 *)&local_40);
          if (this[0x18] != (GatlingPeaPlantfood)0x0) {
            fVar13 = *pfVar9;
            Projectile::SetVelocityScale((Projectile *)this_00,-fVar13,pfVar9[1],pfVar9[2]);
            FUN_03fdc12c(this_00 + 0xd4,0.0 < fVar13);
          }
          iVar12 = iVar12 + 1;
          *(int *)(this + 0x10) = *(int *)(this + 0x10) + 1;
        } while ((iVar12 < *(int *)(*(long *)(gLawnApp + 0x9f0) + 0xfc)) &&
                (iVar12 <= *(int *)(param_1 + 0x110) + 1));
      }
      local_b4 = local_b4 + 1;
    } while (local_b4 != iVar2);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

