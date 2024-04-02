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
	{ 0x975eb5b8, "param_ops_short" },
	{ 0x6dc87645, "param_array_ops" },
	{ 0xc749fd1c, "pci_unregister_driver" },
	{ 0x6e524bb0, "__pci_register_driver" },
	{ 0x27e1a049, "printk" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x1aa6f7d9, "dma_direct_map_page" },
	{ 0xc0705353, "dvb_net_init" },
	{ 0x14956fe4, "dvb_register_frontend" },
	{ 0x6cf8517f, "tda10046_attach" },
	{ 0x6a404590, "dvb_dmxdev_init" },
	{ 0x77352286, "dvb_dmx_init" },
	{ 0xe6478472, "_dev_info" },
	{ 0x68a80d60, "dvb_register_adapter" },
	{ 0x816a3c16, "i2c_bit_add_bus" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0x25c5ba6e, "pci_iomap" },
	{ 0x3c24cba5, "pci_request_regions" },
	{ 0x50fe27c8, "pci_set_master" },
	{ 0xa54c0ba0, "dma_set_mask" },
	{ 0xd7c584a, "pci_write_config_dword" },
	{ 0x1d29dff0, "pci_enable_device" },
	{ 0xa202a8e5, "kmalloc_order_trace" },
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
	{ 0xd0edfd15, "dma_direct_unmap_page" },
	{ 0xe637fa94, "dev_printk" },
	{ 0xc41c945e, "dma_direct_sync_single_for_device" },
	{ 0xff4f5a38, "dma_direct_sync_single_for_cpu" },
	{ 0x36b3d463, "dma_ops" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x81676af4, "dvb_dmx_swfilter_packets" },
	{ 0xf82eea4a, "request_firmware" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xf7340ca9, "i2c_transfer" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=dvb-core,tda1004x,i2c-algo-bit";

MODULE_ALIAS("pci:v00000432d00000001sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "E10731E9B8312A6AF8E1F29");
MODULE_INFO(rhelversion, "8.0");
