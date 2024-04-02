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
	{ 0xa8af86d0, "sysfs_create_bin_file" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0x5ccde853, "i2c_new_dummy" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x15f864fa, "i2c_smbus_read_i2c_block_data" },
	{ 0x69acdf38, "memcpy" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0x9020c14d, "i2c_smbus_read_byte" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x20e2dc83, "i2c_smbus_write_byte_data" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x37a0cba, "kfree" },
	{ 0x9b76f02f, "sysfs_remove_bin_file" },
	{ 0x2b26f667, "i2c_unregister_device" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("i2c:max6875");

MODULE_INFO(srcversion, "0F6C057BA89B0DBDAF4D991");
MODULE_INFO(rhelversion, "8.0");
