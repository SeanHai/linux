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
	{ 0xc69c9a1f, "devm_hwmon_device_register_with_groups" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0x3fa74627, "devm_kmalloc" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0x60ea2d6, "kstrtoull" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x20e2dc83, "i2c_smbus_write_byte_data" },
	{ 0x1b17e06c, "kstrtoll" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x91715312, "sprintf" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0x5792f848, "strlcpy" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xda261c70, "i2c_smbus_read_byte_data" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("of:N*T*Cnational,lm63");
MODULE_ALIAS("of:N*T*Cnational,lm63C*");
MODULE_ALIAS("of:N*T*Cnational,lm64");
MODULE_ALIAS("of:N*T*Cnational,lm64C*");
MODULE_ALIAS("of:N*T*Cnational,lm96163");
MODULE_ALIAS("of:N*T*Cnational,lm96163C*");
MODULE_ALIAS("i2c:lm63");
MODULE_ALIAS("i2c:lm64");
MODULE_ALIAS("i2c:lm96163");

MODULE_INFO(srcversion, "51B784612AC22C0FCD2EFAF");
MODULE_INFO(rhelversion, "8.0");
