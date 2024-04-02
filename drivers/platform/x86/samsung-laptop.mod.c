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
	{ 0xfb166cb4, "param_ops_bool" },
	{ 0x985ca3e0, "single_release" },
	{ 0x4b94a99b, "seq_read" },
	{ 0x291eb36, "seq_lseek" },
	{ 0x7681946c, "unregister_pm_notifier" },
	{ 0xdad01803, "sysfs_remove_group" },
	{ 0x72a6ba54, "backlight_device_unregister" },
	{ 0x9cc4f70a, "register_pm_notifier" },
	{ 0x5d11132b, "debugfs_remove_recursive" },
	{ 0xb03676a8, "debugfs_create_file" },
	{ 0x87591a94, "debugfs_create_blob" },
	{ 0xbecaf3ee, "debugfs_create_u8" },
	{ 0xff9ef847, "debugfs_create_u32" },
	{ 0x40b44096, "debugfs_create_u16" },
	{ 0xf5284f7e, "debugfs_create_dir" },
	{ 0x16500d9a, "of_led_classdev_register" },
	{ 0x43a53735, "__alloc_workqueue_key" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x5d1c022e, "backlight_device_register" },
	{ 0xf0aeba88, "sysfs_create_group" },
	{ 0x37a0cba, "kfree" },
	{ 0x3cf48db4, "platform_device_unregister" },
	{ 0x11089ac7, "_ctype" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x1d43171b, "platform_device_register_full" },
	{ 0x6de7f7ff, "acpi_video_get_backlight_type" },
	{ 0xe92ca535, "acpi_video_set_dmi_backlight_type" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0x9d284533, "efi" },
	{ 0x83eb21c, "rfkill_unregister" },
	{ 0xedc03953, "iounmap" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x84a914a7, "led_classdev_unregister" },
	{ 0xc41033c1, "seq_printf" },
	{ 0xc7f4b92, "single_open" },
	{ 0x121da905, "queue_work_on" },
	{ 0x8a490c90, "rfkill_set_sw_state" },
	{ 0xdb68bbad, "rfkill_destroy" },
	{ 0x4cabed9, "rfkill_register" },
	{ 0xaad6d92f, "rfkill_init_sw_state" },
	{ 0xd57f0cd9, "rfkill_alloc" },
	{ 0x96b29254, "strncasecmp" },
	{ 0x754d539c, "strlen" },
	{ 0x91715312, "sprintf" },
	{ 0x373db350, "kstrtoint" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x27e1a049, "printk" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=video,rfkill";

MODULE_ALIAS("dmi*:svn*SAMSUNGELECTRONICSCO.,LTD.*:ct*8*:");
MODULE_ALIAS("dmi*:svn*SAMSUNGELECTRONICSCO.,LTD.*:ct*9*:");
MODULE_ALIAS("dmi*:svn*SAMSUNGELECTRONICSCO.,LTD.*:ct*10*:");
MODULE_ALIAS("dmi*:svn*SAMSUNGELECTRONICSCO.,LTD.*:ct*14*:");
MODULE_ALIAS("dmi*:svn*SAMSUNGELECTRONICSCO.,LTD.*:pn*R40/R41*:rn*R40/R41*:");
MODULE_ALIAS("dmi*:svn*SAMSUNGELECTRONICSCO.,LTD.*:pn*N150P*:rn*N150P*:");
MODULE_ALIAS("dmi*:svn*SAMSUNGELECTRONICSCO.,LTD.*:pn*N145P/N250P/N260P*:rn*N145P/N250P/N260P*:");
MODULE_ALIAS("dmi*:svn*SAMSUNGELECTRONICSCO.,LTD.*:pn*N150/N210/N220*:rn*N150/N210/N220*:");
MODULE_ALIAS("dmi*:svn*SAMSUNGELECTRONICSCO.,LTD.*:pn*NF110/NF210/NF310*:rn*NF110/NF210/NF310*:");
MODULE_ALIAS("dmi*:svn*SAMSUNGELECTRONICSCO.,LTD.*:pn*X360*:rn*X360*:");
MODULE_ALIAS("dmi*:svn*SAMSUNGELECTRONICSCO.,LTD.*:pn*N250P*:rn*N250P*:");
MODULE_ALIAS("dmi*:svn*SAMSUNGELECTRONICSCO.,LTD.*:pn*NC210/NC110*:rn*NC210/NC110*:");
MODULE_ALIAS("dmi*:svn*SAMSUNGELECTRONICSCO.,LTD.*:pn*730U3E/740U3E*:");
MODULE_ALIAS("dmi*:svn*SAMSUNGELECTRONICSCO.,LTD.*:pn*300V3Z/300V4Z/300V5Z*:");

MODULE_INFO(srcversion, "FEEA5AD8054686A976E9B3A");
MODULE_INFO(rhelversion, "8.0");
