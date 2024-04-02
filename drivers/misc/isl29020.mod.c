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
	{ 0xa46c2bd8, "i2c_del_driver" },
	{ 0x37bf01f3, "i2c_register_driver" },
	{ 0xf9c388e5, "dev_err" },
	{ 0xb12f3cb9, "pm_runtime_enable" },
	{ 0xe6478472, "_dev_info" },
	{ 0xf0aeba88, "sysfs_create_group" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x60ea2d6, "kstrtoull" },
	{ 0xc6572c74, "__pm_runtime_idle" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0xf9a482f9, "msleep" },
	{ 0x8a77fa8c, "__pm_runtime_resume" },
	{ 0x91715312, "sprintf" },
	{ 0xdad01803, "sysfs_remove_group" },
	{ 0x20e2dc83, "i2c_smbus_write_byte_data" },
	{ 0xda261c70, "i2c_smbus_read_byte_data" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("i2c:isl29020");

MODULE_INFO(srcversion, "81290044F3EEC44CB31F8A4");
MODULE_INFO(rhelversion, "8.0");
