// Class: WorldLevelPackageRewardBannerWidgetFactory


/* WorldLevelPackageRewardBannerWidgetFactory::CreateWidget(int) */

WorldLevelPackageRewardBannerPlant *
WorldLevelPackageRewardBannerWidgetFactory::CreateWidget(int param_1)

{
  WorldLevelPackageRewardBannerPlant *this;
  WorldLevelPackageRewardBannerWidget *this_00;
  
  if (param_1 != 0x5a64) {
    this = ::operator_new(0xf0);
    WorldLevelPackageRewardBannerPlant::WorldLevelPackageRewardBannerPlant(this,param_1);
    return this;
  }
  this_00 = ::operator_new(0xe8);
  WorldLevelPackageRewardBannerWidget::WorldLevelPackageRewardBannerWidget(this_00,0x5a64);
  return (WorldLevelPackageRewardBannerPlant *)this_00;
}

