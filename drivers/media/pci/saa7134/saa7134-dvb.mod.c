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
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0x975eb5b8, "param_ops_short" },
	{ 0x6dc87645, "param_array_ops" },
	{ 0xccb44052, "saa7134_ts_unregister" },
	{ 0xa33147ec, "saa7134_ts_register" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xf82eea4a, "request_firmware" },
	{ 0xae15f064, "vb2_dvb_dealloc_frontends" },
	{ 0x49aa17fb, "vb2_dvb_register_bus" },
	{ 0x4e83446, "saa7134_tuner_callback" },
	{ 0xba1fd87e, "vb2_queue_init" },
	{ 0x2dddb05a, "vb2_dma_sg_memops" },
	{ 0xc4297b81, "saa7134_ts_qops" },
	{ 0x30d28da6, "vb2_dvb_alloc_frontend" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0xf9a482f9, "msleep" },
	{ 0x9b7fe4d4, "__dynamic_pr_debug" },
	{ 0x403a0a26, "saa7134_set_gpio" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0x402b8281, "__request_module" },
	{ 0x868784cb, "__symbol_get" },
	{ 0x27e1a049, "printk" },
	{ 0xae35f2d5, "vb2_queue_release" },
	{ 0xdf07b8a9, "vb2_dvb_unregister_bus" },
	{ 0x1f492f55, "vb2_dvb_get_frontend" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xf7340ca9, "i2c_transfer" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=saa7134,videobuf2-dvb,videobuf2-v4l2,videobuf2-dma-sg";


MODULE_INFO(srcversion, "C7E52EDBEBB46575818D819");
MODULE_INFO(rhelversion, "8.0");
