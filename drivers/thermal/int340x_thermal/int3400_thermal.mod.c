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
	{ 0x1895b770, "platform_driver_unregister" },
	{ 0xf65b883b, "__platform_driver_register" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0x170ddf79, "acpi_install_notify_handler" },
	{ 0xf0aeba88, "sysfs_create_group" },
	{ 0x1887763e, "acpi_thermal_rel_misc_device_add" },
	{ 0x482bc218, "thermal_zone_device_register" },
	{ 0xf0f9fe0d, "acpi_parse_trt" },
	{ 0x111eefed, "acpi_parse_art" },
	{ 0xb89b6e6b, "guid_parse" },
	{ 0xd92deb6b, "acpi_evaluate_object" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0x78843f2d, "is_acpi_device_node" },
	{ 0x91715312, "sprintf" },
	{ 0xb26b8c8, "acpi_run_osc" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xdf2dafc4, "kobject_uevent_env" },
	{ 0x44b5ee9a, "kasprintf" },
	{ 0x28318305, "snprintf" },
	{ 0x5a921311, "strncmp" },
	{ 0x86c998e6, "acpi_thermal_rel_misc_device_remove" },
	{ 0x37a0cba, "kfree" },
	{ 0x3111f1ae, "thermal_zone_device_unregister" },
	{ 0xdad01803, "sysfs_remove_group" },
	{ 0x1c58427f, "acpi_remove_notify_handler" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=acpi_thermal_rel";

MODULE_ALIAS("acpi*:INT3400:*");

MODULE_INFO(srcversion, "93DF64A4457AA0386229166");
MODULE_INFO(rhelversion, "8.0");
