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
	{ 0xec89da9c, "param_ops_ushort" },
	{ 0x3cf48db4, "platform_device_unregister" },
	{ 0x1895b770, "platform_driver_unregister" },
	{ 0xf65b883b, "__platform_driver_register" },
	{ 0x27a0b904, "platform_device_put" },
	{ 0xe0c31db6, "platform_device_add" },
	{ 0xfb1bf80b, "platform_device_add_data" },
	{ 0x187b257e, "platform_device_add_resources" },
	{ 0xedafd5ca, "platform_device_alloc" },
	{ 0x6978a86b, "acpi_check_resource_conflict" },
	{ 0x27e1a049, "printk" },
	{ 0x29686856, "hwmon_device_register" },
	{ 0xf0aeba88, "sysfs_create_group" },
	{ 0x5d2f1135, "device_create_file" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x996c611b, "platform_get_resource" },
	{ 0xeb411599, "__devm_request_region" },
	{ 0xca27d0c4, "ioport_resource" },
	{ 0x3fa74627, "devm_kmalloc" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x2ae2fdba, "dev_notice" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0x60ea2d6, "kstrtoull" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x91715312, "sprintf" },
	{ 0x2b259a46, "hwmon_device_unregister" },
	{ 0xdad01803, "sysfs_remove_group" },
	{ 0x6b8d353d, "device_remove_file" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "F8837EAF1C9568E9D2E2D0A");
MODULE_INFO(rhelversion, "8.0");
