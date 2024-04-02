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
	{ 0xb9338741, "kmem_cache_destroy" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x93ac2ae4, "driver_register" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0x2a882571, "fw_send_request" },
	{ 0xf0c8e802, "netif_carrier_on" },
	{ 0x8c24bd72, "skb_clone" },
	{ 0x4388bd04, "netif_carrier_off" },
	{ 0x4e94b037, "fw_bus_type" },
	{ 0xe6672d2b, "__dev_kfree_skb_any" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0xb348a850, "ex_handler_refcount" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xf6e0d4e, "fw_iso_context_start" },
	{ 0x1cb03603, "fw_iso_context_queue_flush" },
	{ 0x7db9fd3a, "__netdev_alloc_skb" },
	{ 0xabd938ef, "netif_rx" },
	{ 0x7cc4a5d, "printk_timed_ratelimit" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0x27776184, "netif_tx_wake_queue" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x3a771e39, "fw_core_add_descriptor" },
	{ 0x3fa64d02, "ethtool_op_get_link" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x43d0701a, "free_netdev" },
	{ 0xc351790f, "driver_unregister" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xdce6588d, "register_netdev" },
	{ 0x8a7de935, "kmem_cache_free" },
	{ 0x5def83f9, "skb_push" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0xd9eb5f45, "fw_iso_buffer_destroy" },
	{ 0x955c2e4e, "skb_pull" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x2ae2fdba, "dev_notice" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x8ee5612c, "fw_iso_context_queue" },
	{ 0x2b63e7fc, "kmem_cache_alloc" },
	{ 0x97ab9ad3, "pv_irq_ops" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xc5c92ee, "kfree_skb" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x9599bf40, "alloc_netdev_mqs" },
	{ 0xf49649cb, "fw_core_add_address_handler" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x8678453c, "kmem_cache_create" },
	{ 0xf15eb651, "fw_iso_context_stop" },
	{ 0xec88350c, "fw_core_remove_address_handler" },
	{ 0x37a0cba, "kfree" },
	{ 0xbd305a58, "fw_iso_context_create" },
	{ 0x69acdf38, "memcpy" },
	{ 0x93f0703, "unregister_netdev" },
	{ 0x509f625d, "consume_skb" },
	{ 0x2a7e08d3, "fw_iso_buffer_init" },
	{ 0xeb4b9a49, "skb_put" },
	{ 0xaedf84ce, "fw_high_memory_region" },
	{ 0x994a4ced, "fw_iso_context_destroy" },
	{ 0x6da974ae, "fw_send_response" },
	{ 0xbc6094c, "fw_core_remove_descriptor" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=firewire-core";

MODULE_ALIAS("ieee1394:ven*mo*sp0000005Ever00000001*");
MODULE_ALIAS("ieee1394:ven*mo*sp0000005Ever00000002*");

MODULE_INFO(srcversion, "C1D481F292380C963CC4221");
MODULE_INFO(rhelversion, "8.0");
