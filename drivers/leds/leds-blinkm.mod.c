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
	{ 0x5792f848, "strlcpy" },
	{ 0x12a38747, "usleep_range" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x16500d9a, "of_led_classdev_register" },
	{ 0x28318305, "snprintf" },
	{ 0xf0aeba88, "sysfs_create_group" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0x3fa74627, "devm_kmalloc" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0xf9019aa0, "kstrtou8" },
	{ 0xf9a482f9, "msleep" },
	{ 0xdad01803, "sysfs_remove_group" },
	{ 0x84a914a7, "led_classdev_unregister" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x9020c14d, "i2c_smbus_read_byte" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x4a928de6, "mutex_lock_interruptible" },
	{ 0x4ca9669f, "scnprintf" },
	{ 0x778aa0e0, "i2c_smbus_write_byte" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("i2c:blinkm");

MODULE_INFO(srcversion, "54F2AF1FF45C22387BEC1B4");
MODULE_INFO(rhelversion, "8.0");
