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
	{ 0x93f0703, "unregister_netdev" },
	{ 0x43d0701a, "free_netdev" },
	{ 0xdce6588d, "register_netdev" },
	{ 0xf3b47f67, "xp_partition_id" },
	{ 0x9599bf40, "alloc_netdev_mqs" },
	{ 0x9a5386e3, "ether_setup" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0xe6478472, "_dev_info" },
	{ 0x12e285ec, "is_uv_system" },
	{ 0x345c9217, "xpc_disconnect" },
	{ 0xe6672d2b, "__dev_kfree_skb_any" },
	{ 0x4388bd04, "netif_carrier_off" },
	{ 0xf0c8e802, "netif_carrier_on" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xfca44c56, "netif_rx_ni" },
	{ 0x45a3a859, "eth_type_trans" },
	{ 0xf05c7b8, "__x86_indirect_thunk_r15" },
	{ 0x68fa7d28, "xp_remote_memcpy" },
	{ 0xeb4b9a49, "skb_put" },
	{ 0x7db9fd3a, "__netdev_alloc_skb" },
	{ 0xf9c388e5, "dev_err" },
	{ 0xc04c7267, "xpc_connect" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0x37a0cba, "kfree" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x509f625d, "consume_skb" },
	{ 0xead4f7fe, "xp_max_npartitions" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x69acdf38, "memcpy" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0xe68acd6c, "xpc_interface" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x64ba5017, "xp_pa" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=xp";


MODULE_INFO(srcversion, "77A582D1BDE39104B0AEEF7");
MODULE_INFO(rhelversion, "8.0");
