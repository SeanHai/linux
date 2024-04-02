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
	{ 0x7772a653, "hwmon_device_register_with_groups" },
	{ 0xf5284f7e, "debugfs_create_dir" },
	{ 0xda261c70, "i2c_smbus_read_byte_data" },
	{ 0x1b17e06c, "kstrtoll" },
	{ 0x31825d44, "i2c_smbus_write_word_data" },
	{ 0x20e2dc83, "i2c_smbus_write_byte_data" },
	{ 0x28cde093, "no_llseek" },
	{ 0x2b259a46, "hwmon_device_unregister" },
	{ 0xad27f361, "__warn_printk" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0xb03676a8, "debugfs_create_file" },
	{ 0x5d11132b, "debugfs_remove_recursive" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x33d51101, "i2c_smbus_read_word_data" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0x9166fada, "strncpy" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x778aa0e0, "i2c_smbus_write_byte" },
	{ 0xd5272c1b, "simple_attr_release" },
	{ 0xf183b83e, "debugfs_attr_read" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x37a0cba, "kfree" },
	{ 0x4ca9669f, "scnprintf" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0x28318305, "snprintf" },
	{ 0x3fa74627, "devm_kmalloc" },
	{ 0x4833584b, "debugfs_attr_write" },
	{ 0x53f8e9af, "simple_attr_open" },
	{ 0x85f5e2aa, "krealloc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "FB64DBD3F755D1DCA296A21");
MODULE_INFO(rhelversion, "8.0");
