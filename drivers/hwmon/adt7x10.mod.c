#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
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
	{ 0x6b8d353d, "device_remove_file" },
	{ 0xf9a482f9, "msleep" },
	{ 0x1b17e06c, "kstrtoll" },
	{ 0x2b259a46, "hwmon_device_unregister" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x91715312, "sprintf" },
	{ 0xdad01803, "sysfs_remove_group" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0xf0aeba88, "sysfs_create_group" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0x5d2f1135, "device_create_file" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xa0d5ac30, "sysfs_notify" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0x3fa74627, "devm_kmalloc" },
	{ 0x29686856, "hwmon_device_register" },
	{ 0xc1514a3b, "free_irq" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "25327180B5B20D777FB2CE0");
MODULE_INFO(rhelversion, "8.0");
