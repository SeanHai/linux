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
	{ 0x372e8e21, "eth_validate_addr" },
	{ 0xc826b84c, "eth_mac_addr" },
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0xc749fd1c, "pci_unregister_driver" },
	{ 0x6e524bb0, "__pci_register_driver" },
	{ 0xabd938ef, "netif_rx" },
	{ 0x45a3a859, "eth_type_trans" },
	{ 0xeb4b9a49, "skb_put" },
	{ 0xd0edfd15, "dma_direct_unmap_page" },
	{ 0x4cc8f9c8, "init_timer_key" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0x8dc974cb, "dev_trans_start" },
	{ 0x4388bd04, "netif_carrier_off" },
	{ 0x318f7969, "add_timer" },
	{ 0xf0c8e802, "netif_carrier_on" },
	{ 0xf062ac06, "pci_enable_wake" },
	{ 0xee7915ff, "pci_choose_state" },
	{ 0x4bb012cf, "netif_device_detach" },
	{ 0x93527c4c, "pci_save_state" },
	{ 0xbfef472c, "netdev_warn" },
	{ 0xc3946e2d, "netif_device_attach" },
	{ 0x20f5048a, "pci_set_power_state" },
	{ 0x56898d73, "pci_restore_state" },
	{ 0x7db9fd3a, "__netdev_alloc_skb" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x1aa6f7d9, "dma_direct_map_page" },
	{ 0x36b3d463, "dma_ops" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xec02a35f, "del_timer_sync" },
	{ 0x509f625d, "consume_skb" },
	{ 0x50fe27c8, "pci_set_master" },
	{ 0x38a7735c, "netdev_info" },
	{ 0xdce6588d, "register_netdev" },
	{ 0x25c5ba6e, "pci_iomap" },
	{ 0x80d50279, "dma_alloc_attrs" },
	{ 0x3c24cba5, "pci_request_regions" },
	{ 0x1d29dff0, "pci_enable_device" },
	{ 0xa54c0ba0, "dma_set_mask" },
	{ 0x2842a1d7, "alloc_etherdev_mqs" },
	{ 0x27e1a049, "printk" },
	{ 0x27776184, "netif_tx_wake_queue" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xb6df8e55, "netdev_err" },
	{ 0xe6672d2b, "__dev_kfree_skb_any" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x69acdf38, "memcpy" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x5792f848, "strlcpy" },
	{ 0x8f996a30, "ethtool_convert_legacy_u32_to_link_mode" },
	{ 0x43d0701a, "free_netdev" },
	{ 0xdfb2ae49, "pci_disable_device" },
	{ 0xb46a45f, "pci_release_regions" },
	{ 0xeddfd55a, "dma_free_attrs" },
	{ 0xc94fb8eb, "pci_iounmap" },
	{ 0x93f0703, "unregister_netdev" },
	{ 0xe484e35f, "ioread32" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v000010B9d00005261sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B9d00005263sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "6E01FAD63E58150BE9E08A2");
MODULE_INFO(rhelversion, "8.0");
