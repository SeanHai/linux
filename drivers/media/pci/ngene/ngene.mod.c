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
	{ 0x402b8281, "__request_module" },
	{ 0xfc6380e5, "dvb_ringbuffer_free" },
	{ 0xf9a482f9, "msleep" },
	{ 0xebbc2d9b, "dvb_ringbuffer_init" },
	{ 0x88f31ace, "dvb_module_probe" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0x77352286, "dvb_dmx_init" },
	{ 0x93eacf30, "dvb_unregister_adapter" },
	{ 0x14956fe4, "dvb_register_frontend" },
	{ 0xdfb2ae49, "pci_disable_device" },
	{ 0xf7340ca9, "i2c_transfer" },
	{ 0xe7ddb3d3, "dvb_register_device" },
	{ 0x91a6794b, "dvb_ringbuffer_read_user" },
	{ 0xf9a3fce5, "dvb_unregister_frontend" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0xeddfd55a, "dma_free_attrs" },
	{ 0xcf5ab5e1, "dvb_net_release" },
	{ 0x1104443c, "i2c_add_adapter" },
	{ 0xb06ee9f4, "dvb_frontend_detach" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x50fe27c8, "pci_set_master" },
	{ 0x2f5cdf80, "dvb_ringbuffer_write" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0xfb578fc5, "memset" },
	{ 0x975eb5b8, "param_ops_short" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x8c9697b3, "dvb_dmxdev_release" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0x27e1a049, "printk" },
	{ 0x19e92411, "dvb_dmx_swfilter" },
	{ 0xc0705353, "dvb_net_init" },
	{ 0xc3f679f9, "dvb_ringbuffer_write_user" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xd71244be, "dvb_generic_release" },
	{ 0x80d50279, "dma_alloc_attrs" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x81c980e7, "dvb_ca_en50221_release" },
	{ 0x6626afca, "down" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0xce8b1878, "__x86_indirect_thunk_r14" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0xcdc0d85f, "dvb_unregister_device" },
	{ 0x88260da4, "dvb_dmx_release" },
	{ 0xfcec1a67, "pci_enable_msi" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x868784cb, "__symbol_get" },
	{ 0x82072614, "tasklet_kill" },
	{ 0xfb09f39a, "dvb_ringbuffer_read" },
	{ 0xe1887eed, "dvb_module_release" },
	{ 0xac7396a8, "i2c_del_adapter" },
	{ 0xe6478472, "_dev_info" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x97ab9ad3, "pv_irq_ops" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x12a38747, "usleep_range" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1000e51, "schedule" },
	{ 0x3ad875fa, "dvb_generic_open" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xe138ce6b, "dvb_ringbuffer_avail" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x68a80d60, "dvb_register_adapter" },
	{ 0xc749fd1c, "pci_unregister_driver" },
	{ 0x453c8403, "pci_msi_enabled" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xb3352dd2, "dvb_ringbuffer_empty" },
	{ 0x69acdf38, "memcpy" },
	{ 0x6dc87645, "param_array_ops" },
	{ 0x88cfc160, "pci_disable_msi" },
	{ 0xedc03953, "iounmap" },
	{ 0xcf2a6966, "up" },
	{ 0x6e524bb0, "__pci_register_driver" },
	{ 0xf82eea4a, "request_firmware" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0x28db4633, "dvb_ca_en50221_init" },
	{ 0x1d29dff0, "pci_enable_device" },
	{ 0x84277b2a, "release_firmware" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xfb9a826f, "dvb_ringbuffer_flush" },
	{ 0x6a404590, "dvb_dmxdev_init" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=dvb-core";

MODULE_ALIAS("pci:v000018C3d00000720sv000018C3sd0000AB04bc*sc*i*");
MODULE_ALIAS("pci:v000018C3d00000720sv000018C3sd0000AB05bc*sc*i*");
MODULE_ALIAS("pci:v000018C3d00000720sv000018C3sd0000ABC3bc*sc*i*");
MODULE_ALIAS("pci:v000018C3d00000720sv000018C3sd0000ABC4bc*sc*i*");
MODULE_ALIAS("pci:v000018C3d00000720sv000018C3sd0000DB01bc*sc*i*");
MODULE_ALIAS("pci:v000018C3d00000720sv000018C3sd0000DB02bc*sc*i*");
MODULE_ALIAS("pci:v000018C3d00000720sv000018C3sd0000DD00bc*sc*i*");
MODULE_ALIAS("pci:v000018C3d00000720sv000018C3sd0000DD10bc*sc*i*");
MODULE_ALIAS("pci:v000018C3d00000720sv000018C3sd0000DD20bc*sc*i*");
MODULE_ALIAS("pci:v000018C3d00000720sv00001461sd0000062Ebc*sc*i*");
MODULE_ALIAS("pci:v000018C3d00000720sv0000153Bsd00001167bc*sc*i*");

MODULE_INFO(srcversion, "EEB2EA574E36FBCB8D49356");
MODULE_INFO(rhelversion, "8.0");
