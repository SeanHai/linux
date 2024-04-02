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
	{ 0xa46c2bd8, "i2c_del_driver" },
	{ 0x37bf01f3, "i2c_register_driver" },
	{ 0xdca4e2a, "v4l2_ctrl_handler_setup" },
	{ 0x37b90fbc, "v4l2_ctrl_auto_cluster" },
	{ 0x6b25ae0e, "v4l2_ctrl_new_std" },
	{ 0xadc17cd5, "v4l2_ctrl_handler_init_class" },
	{ 0xf65fde3e, "v4l2_i2c_subdev_init" },
	{ 0x28318305, "snprintf" },
	{ 0x3fa74627, "devm_kmalloc" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x5792f848, "strlcpy" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x8038b37c, "v4l2_ctrl_handler_log_status" },
	{ 0x27e1a049, "printk" },
	{ 0xda261c70, "i2c_smbus_read_byte_data" },
	{ 0x20e2dc83, "i2c_smbus_write_byte_data" },
	{ 0xc40c9cea, "v4l2_ctrl_handler_free" },
	{ 0x1b7ade5b, "v4l2_device_unregister_subdev" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=videodev,v4l2-common";

MODULE_ALIAS("i2c:saa7115_auto");
MODULE_ALIAS("i2c:saa7111");
MODULE_ALIAS("i2c:saa7113");
MODULE_ALIAS("i2c:saa7114");
MODULE_ALIAS("i2c:saa7115");
MODULE_ALIAS("i2c:saa7118");
MODULE_ALIAS("i2c:gm7113c");

MODULE_INFO(srcversion, "4E0D12219F209C315824F8A");
MODULE_INFO(rhelversion, "8.0");
