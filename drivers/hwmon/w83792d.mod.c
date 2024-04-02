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
	{ 0x975eb5b8, "param_ops_short" },
	{ 0x6dc87645, "param_array_ops" },
	{ 0xfb166cb4, "param_ops_bool" },
	{ 0xa46c2bd8, "i2c_del_driver" },
	{ 0x37bf01f3, "i2c_register_driver" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x29686856, "hwmon_device_register" },
	{ 0xf0aeba88, "sysfs_create_group" },
	{ 0x5ccde853, "i2c_new_dummy" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0x3fa74627, "devm_kmalloc" },
	{ 0x1b17e06c, "kstrtoll" },
	{ 0x91715312, "sprintf" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x60ea2d6, "kstrtoull" },
	{ 0x2b26f667, "i2c_unregister_device" },
	{ 0xdad01803, "sysfs_remove_group" },
	{ 0x2b259a46, "hwmon_device_unregister" },
	{ 0x5792f848, "strlcpy" },
	{ 0x20e2dc83, "i2c_smbus_write_byte_data" },
	{ 0xda261c70, "i2c_smbus_read_byte_data" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("i2c:w83792d");

MODULE_INFO(srcversion, "D1FC332BB244B9794D7137E");
MODULE_INFO(rhelversion, "8.0");
