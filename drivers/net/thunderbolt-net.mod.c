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
	{ 0xb81bf6c5, "alloc_pages_current" },
	{ 0x38a7735c, "netdev_info" },
	{ 0xc22d0cf, "tb_xdomain_disable_paths" },
	{ 0x696fa89e, "napi_disable" },
	{ 0x11ab34a4, "napi_schedule_prep" },
	{ 0x3cd5460, "tb_ring_poll" },
	{ 0x6e3fd514, "tb_xdomain_request" },
	{ 0xf0c8e802, "netif_carrier_on" },
	{ 0xf2b3b937, "tb_ring_stop" },
	{ 0xc1c794e, "delayed_work_timer_fn" },
	{ 0x801b5521, "tb_ring_alloc_rx" },
	{ 0x898506d5, "tb_ring_poll_complete" },
	{ 0x4388bd04, "netif_carrier_off" },
	{ 0x81b1b255, "cancel_work_sync" },
	{ 0xff4f5a38, "dma_direct_sync_single_for_cpu" },
	{ 0xe8357d5b, "tb_unregister_service_driver" },
	{ 0xe6672d2b, "__dev_kfree_skb_any" },
	{ 0x4cc8f9c8, "init_timer_key" },
	{ 0x68f927fb, "cancel_delayed_work_sync" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x4e64bdfd, "tb_register_protocol_handler" },
	{ 0x658e3d97, "tb_property_add_immediate" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x2a2c4ae4, "__alloc_pages_nodemask" },
	{ 0x131db64a, "system_long_wq" },
	{ 0x603249ed, "tb_unregister_property_dir" },
	{ 0xb47cca30, "csum_ipv6_magic" },
	{ 0xf1cfd1ff, "tb_register_property_dir" },
	{ 0x5fa6f163, "tb_xdomain_response" },
	{ 0x27776184, "netif_tx_wake_queue" },
	{ 0xf7d6636f, "current_task" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0x99291cca, "tb_register_service_driver" },
	{ 0x43d0701a, "free_netdev" },
	{ 0xdce6588d, "register_netdev" },
	{ 0x1aa6f7d9, "dma_direct_map_page" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x9c9da5da, "tb_service_type" },
	{ 0xbac87e5b, "netif_napi_add" },
	{ 0xe98d105f, "build_skb" },
	{ 0x393b4f2f, "tb_property_free_dir" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xd0edfd15, "dma_direct_unmap_page" },
	{ 0xc3946e2d, "netif_device_attach" },
	{ 0x7e6f0d64, "napi_gro_receive" },
	{ 0xf76028c7, "tb_unregister_protocol_handler" },
	{ 0x734d1ea8, "__free_pages" },
	{ 0x618911fc, "numa_node" },
	{ 0x4bb012cf, "netif_device_detach" },
	{ 0xbd51e506, "__napi_schedule" },
	{ 0xd1e4ec46, "queue_delayed_work_on" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x7cfd3bbc, "napi_complete_done" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0x45a3a859, "eth_type_trans" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xb6df8e55, "netdev_err" },
	{ 0x1ab1a3d9, "tb_ring_alloc_tx" },
	{ 0xbfef472c, "netdev_warn" },
	{ 0x69acdf38, "memcpy" },
	{ 0x77201499, "skb_add_rx_frag" },
	{ 0x3535a1de, "tb_ring_free" },
	{ 0xc41c945e, "dma_direct_sync_single_for_device" },
	{ 0x93f0703, "unregister_netdev" },
	{ 0x121da905, "queue_work_on" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0xb1018e4d, "tb_xdomain_enable_paths" },
	{ 0xdaa99085, "__tb_ring_enqueue" },
	{ 0xeb4b9a49, "skb_put" },
	{ 0x1d23ee1, "tb_property_create_dir" },
	{ 0x317cc4af, "skb_copy_bits" },
	{ 0xcaa6b3d, "tb_ring_start" },
	{ 0x36b3d463, "dma_ops" },
	{ 0x72c24fef, "tb_xdomain_type" },
	{ 0x2842a1d7, "alloc_etherdev_mqs" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("tbsvc:knetworkp00000001v*r*");

MODULE_INFO(srcversion, "817C8C280F3D85C34235A37");
MODULE_INFO(rhelversion, "8.0");
