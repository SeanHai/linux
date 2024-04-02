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
	{ 0x95db90fb, "sch56xx_watchdog_register" },
	{ 0x29686856, "hwmon_device_register" },
	{ 0xf0aeba88, "sysfs_create_group" },
	{ 0x27e1a049, "printk" },
	{ 0x1568393, "sch56xx_read_virtual_reg" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0x996c611b, "platform_get_resource" },
	{ 0x3fa74627, "devm_kmalloc" },
	{ 0xaa17a737, "sch56xx_write_virtual_reg" },
	{ 0xb37b9b81, "sch56xx_read_virtual_reg16" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x96ec3b26, "sch56xx_read_virtual_reg12" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x28318305, "snprintf" },
	{ 0xdad01803, "sysfs_remove_group" },
	{ 0x2b259a46, "hwmon_device_unregister" },
	{ 0x34257f35, "sch56xx_watchdog_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=sch56xx-common";


MODULE_INFO(srcversion, "4B91AA07B9C2BD1D13FF197");
MODULE_INFO(rhelversion, "8.0");
