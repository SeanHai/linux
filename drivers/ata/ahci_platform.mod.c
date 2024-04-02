#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xe6af07fa, "module_layout" },
	{ 0xcf4a65ad, "ahci_platform_ops" },
	{ 0xd81e47b2, "ahci_sdev_attrs" },
	{ 0x8a88e41f, "ahci_shost_attrs" },
	{ 0x92a0f1e7, "ata_scsi_unlock_native_capacity" },
	{ 0xb9366712, "ata_std_bios_param" },
	{ 0x7f680436, "ata_scsi_change_queue_depth" },
	{ 0x5b1dd5cd, "ata_scsi_slave_destroy" },
	{ 0xca07611e, "ata_scsi_slave_config" },
	{ 0x858e2d45, "ata_scsi_queuecmd" },
	{ 0xf69450fd, "ata_scsi_ioctl" },
	{ 0x407a2d36, "ahci_platform_resume" },
	{ 0x894197de, "ahci_platform_suspend" },
	{ 0x7132534e, "ahci_platform_shutdown" },
	{ 0x71807686, "ata_platform_remove_one" },
	{ 0x1895b770, "platform_driver_unregister" },
	{ 0xf65b883b, "__platform_driver_register" },
	{ 0xcd69a738, "ahci_platform_disable_resources" },
	{ 0x4cd5ebdc, "ahci_platform_init_host" },
	{ 0x1fede25e, "acpi_device_get_match_data" },
	{ 0x29e10590, "ahci_platform_enable_resources" },
	{ 0xbd6a9cf4, "ahci_platform_get_resources" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libahci_platform,libahci,libata";

MODULE_ALIAS("acpi*:APMC0D33:*");
MODULE_ALIAS("acpi*:010601:*");
MODULE_ALIAS("of:N*T*Cgeneric-ahci");
MODULE_ALIAS("of:N*T*Cgeneric-ahciC*");
MODULE_ALIAS("of:N*T*Csnps,spear-ahci");
MODULE_ALIAS("of:N*T*Csnps,spear-ahciC*");
MODULE_ALIAS("of:N*T*Csnps,exynos5440-ahci");
MODULE_ALIAS("of:N*T*Csnps,exynos5440-ahciC*");
MODULE_ALIAS("of:N*T*Cibm,476gtr-ahci");
MODULE_ALIAS("of:N*T*Cibm,476gtr-ahciC*");
MODULE_ALIAS("of:N*T*Csnps,dwc-ahci");
MODULE_ALIAS("of:N*T*Csnps,dwc-ahciC*");
MODULE_ALIAS("of:N*T*Chisilicon,hisi-ahci");
MODULE_ALIAS("of:N*T*Chisilicon,hisi-ahciC*");
MODULE_ALIAS("of:N*T*Ccavium,octeon-7130-ahci");
MODULE_ALIAS("of:N*T*Ccavium,octeon-7130-ahciC*");

MODULE_INFO(srcversion, "402056506074467DBCC842C");
MODULE_INFO(rhelversion, "8.0");
