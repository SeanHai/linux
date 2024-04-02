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
	{ 0xc749fd1c, "pci_unregister_driver" },
	{ 0x6e524bb0, "__pci_register_driver" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x7a30f3c2, "rc_free_device" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0x43a53735, "__alloc_workqueue_key" },
	{ 0x91715312, "sprintf" },
	{ 0xbebb99e4, "rc_register_device" },
	{ 0x28318305, "snprintf" },
	{ 0x963204a3, "rc_allocate_device" },
	{ 0xc0705353, "dvb_net_init" },
	{ 0x6a404590, "dvb_dmxdev_init" },
	{ 0x77352286, "dvb_dmx_init" },
	{ 0xe6478472, "_dev_info" },
	{ 0x68a80d60, "dvb_register_adapter" },
	{ 0x816a3c16, "i2c_bit_add_bus" },
	{ 0x1104443c, "i2c_add_adapter" },
	{ 0x80d50279, "dma_alloc_attrs" },
	{ 0x25c5ba6e, "pci_iomap" },
	{ 0x3c24cba5, "pci_request_regions" },
	{ 0x50fe27c8, "pci_set_master" },
	{ 0xa54c0ba0, "dma_set_mask" },
	{ 0x1d29dff0, "pci_enable_device" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xd491a78a, "rc_keydown" },
	{ 0x27e1a049, "printk" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x402b8281, "__request_module" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0x14956fe4, "dvb_register_frontend" },
	{ 0x868784cb, "__symbol_get" },
	{ 0xf9a482f9, "msleep" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x69acdf38, "memcpy" },
	{ 0x81676af4, "dvb_dmx_swfilter_packets" },
	{ 0x121da905, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x37a0cba, "kfree" },
	{ 0xdfb2ae49, "pci_disable_device" },
	{ 0xb46a45f, "pci_release_regions" },
	{ 0xc94fb8eb, "pci_iounmap" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xac7396a8, "i2c_del_adapter" },
	{ 0x93eacf30, "dvb_unregister_adapter" },
	{ 0x88260da4, "dvb_dmx_release" },
	{ 0x8c9697b3, "dvb_dmxdev_release" },
	{ 0xf9a3fce5, "dvb_unregister_frontend" },
	{ 0xcf5ab5e1, "dvb_net_release" },
	{ 0x10bce2f5, "rc_unregister_device" },
	{ 0xeddfd55a, "dma_free_attrs" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=rc-core,dvb-core,i2c-algo-bit";

MODULE_ALIAS("pci:v0000109Fd0000036Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000195Dd00001105sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "35F9E54EA9F88D619DBECA6");
MODULE_INFO(rhelversion, "8.0");
