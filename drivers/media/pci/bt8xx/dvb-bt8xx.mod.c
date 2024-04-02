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
	{ 0xcc085344, "bttv_sub_unregister" },
	{ 0xfc2c6341, "bttv_sub_register" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0xc0705353, "dvb_net_init" },
	{ 0x6a404590, "dvb_dmxdev_init" },
	{ 0x77352286, "dvb_dmx_init" },
	{ 0x68a80d60, "dvb_register_adapter" },
	{ 0x1002cd13, "bt878" },
	{ 0xd5d0bdef, "bt878_num" },
	{ 0xcbc4eb48, "bttv_get_pcidev" },
	{ 0x5792f848, "strlcpy" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0x402b8281, "__request_module" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0x14956fe4, "dvb_register_frontend" },
	{ 0x868784cb, "__symbol_get" },
	{ 0xf7340ca9, "i2c_transfer" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xf82eea4a, "request_firmware" },
	{ 0xf9a482f9, "msleep" },
	{ 0x11dc4b6d, "bttv_gpio_enable" },
	{ 0x8ecf4acc, "bttv_write_gpio" },
	{ 0x95600ab2, "bt878_start" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x37a0cba, "kfree" },
	{ 0x93eacf30, "dvb_unregister_adapter" },
	{ 0xb06ee9f4, "dvb_frontend_detach" },
	{ 0xf9a3fce5, "dvb_unregister_frontend" },
	{ 0x88260da4, "dvb_dmx_release" },
	{ 0x8c9697b3, "dvb_dmxdev_release" },
	{ 0xcf5ab5e1, "dvb_net_release" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x7641c04f, "bt878_stop" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x27e1a049, "printk" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x19e92411, "dvb_dmx_swfilter" },
	{ 0x4b760fd6, "dvb_dmx_swfilter_204" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=bttv,dvb-core,bt878";


MODULE_INFO(srcversion, "D01A7C406CFC8DCFD8DF56C");
MODULE_INFO(rhelversion, "8.0");
