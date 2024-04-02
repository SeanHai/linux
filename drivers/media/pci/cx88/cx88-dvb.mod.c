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
	{ 0xffe97911, "vb2_ops_wait_finish" },
	{ 0x41e6ca3f, "vb2_ops_wait_prepare" },
	{ 0xa9a2392, "cx8802_unregister_driver" },
	{ 0x84fcda98, "cx8802_register_driver" },
	{ 0xba1fd87e, "vb2_queue_init" },
	{ 0x2dddb05a, "vb2_dma_sg_memops" },
	{ 0x30d28da6, "vb2_dvb_alloc_frontend" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0xe772f372, "vp3054_i2c_probe" },
	{ 0xae15f064, "vb2_dvb_dealloc_frontends" },
	{ 0x49aa17fb, "vb2_dvb_register_bus" },
	{ 0x6141c8c5, "cx88_tuner_callback" },
	{ 0xf9a3fce5, "dvb_unregister_frontend" },
	{ 0xb06ee9f4, "dvb_frontend_detach" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0x402b8281, "__request_module" },
	{ 0x868784cb, "__symbol_get" },
	{ 0xdf9b1698, "cx88_setup_xc3028" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0xcb0905e7, "cx8802_get_driver" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x89487516, "vb2_dvb_find_frontend" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x12a38747, "usleep_range" },
	{ 0xf7340ca9, "i2c_transfer" },
	{ 0x20121e18, "cx8802_buf_prepare" },
	{ 0xeddfd55a, "dma_free_attrs" },
	{ 0xa2aef7db, "cx8802_start_dma" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xe6617477, "vb2_buffer_done" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x60ff540c, "cx8802_cancel_buffers" },
	{ 0xcccb6410, "cx8802_buf_queue" },
	{ 0x1f492f55, "vb2_dvb_get_frontend" },
	{ 0xf2a01934, "vp3054_i2c_remove" },
	{ 0xdf07b8a9, "vb2_dvb_unregister_bus" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x27e1a049, "printk" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=videobuf2-v4l2,cx8802,videobuf2-dma-sg,videobuf2-dvb,cx88-vp3054-i2c,cx88xx,dvb-core,videobuf2-common";


MODULE_INFO(srcversion, "9A9591976E280B0EE9301B3");
MODULE_INFO(rhelversion, "8.0");
