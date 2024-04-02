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
	{ 0x28cde093, "no_llseek" },
	{ 0xa46c2bd8, "i2c_del_driver" },
	{ 0x37bf01f3, "i2c_register_driver" },
	{ 0x505f0e10, "dev_crit" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xe6478472, "_dev_info" },
	{ 0x6bddef80, "misc_register" },
	{ 0x28318305, "snprintf" },
	{ 0x7c983a5d, "dmi_walk" },
	{ 0x29686856, "hwmon_device_register" },
	{ 0x5d2f1135, "device_create_file" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xf49409b0, "misc_deregister" },
	{ 0x6b8d353d, "device_remove_file" },
	{ 0x2b259a46, "hwmon_device_unregister" },
	{ 0xb44ad4b3, "_copy_to_user" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x714889c4, "nonseekable_open" },
	{ 0xb348a850, "ex_handler_refcount" },
	{ 0xb3b42a38, "mutex_trylock" },
	{ 0x1b17e06c, "kstrtoll" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x91715312, "sprintf" },
	{ 0x60ea2d6, "kstrtoull" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x167e7f9d, "__get_user_1" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x20e2dc83, "i2c_smbus_write_byte_data" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x37a0cba, "kfree" },
	{ 0x5792f848, "strlcpy" },
	{ 0xda261c70, "i2c_smbus_read_byte_data" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("i2c:fscpos");
MODULE_ALIAS("i2c:fscher");
MODULE_ALIAS("i2c:fscscy");
MODULE_ALIAS("i2c:fschrc");
MODULE_ALIAS("i2c:fschmd");
MODULE_ALIAS("i2c:fschds");
MODULE_ALIAS("i2c:fscsyl");

MODULE_INFO(srcversion, "59B43E09E1CF008A017F98D");
MODULE_INFO(rhelversion, "8.0");
