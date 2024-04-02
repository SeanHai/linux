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
	{ 0x60a13e90, "rcu_barrier" },
	{ 0xaaa60325, "genl_unregister_family" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xfd1b0e53, "rtnl_link_unregister" },
	{ 0x604651e7, "genl_register_family" },
	{ 0x163b1a0c, "rtnl_link_register" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x5b5a9263, "skb_trim" },
	{ 0x2809a43b, "genlmsg_put" },
	{ 0xea0d8067, "gro_cells_receive" },
	{ 0x58f85378, "__pskb_pull_tail" },
	{ 0xabd938ef, "netif_rx" },
	{ 0x8c24bd72, "skb_clone" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xc4b52f92, "skb_to_sgvec" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0x2395715c, "skb_cow_data" },
	{ 0xeb4b9a49, "skb_put" },
	{ 0x9b7fe4d4, "__dynamic_pr_debug" },
	{ 0x5def83f9, "skb_push" },
	{ 0xa816dfec, "skb_copy" },
	{ 0xc5c92ee, "kfree_skb" },
	{ 0x509f625d, "consume_skb" },
	{ 0xfad0a7f6, "skb_copy_expand" },
	{ 0x9fdecc31, "unregister_netdevice_many" },
	{ 0xea937c72, "dev_set_mtu" },
	{ 0xcae5ca5, "gro_cells_init" },
	{ 0x9f54ead7, "gro_cells_destroy" },
	{ 0xf0c8e802, "netif_carrier_on" },
	{ 0x25e77e8a, "dev_uc_unsync" },
	{ 0x6bdd1509, "dev_mc_unsync" },
	{ 0x4388bd04, "netif_carrier_off" },
	{ 0x9a5386e3, "ether_setup" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x9688b47c, "dev_queue_xmit" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x7a4497db, "kzfree" },
	{ 0x8568cca5, "dev_set_promiscuity" },
	{ 0x28febc96, "dev_set_allmulti" },
	{ 0x776814c4, "dev_uc_sync" },
	{ 0xf1c82d23, "dev_mc_sync" },
	{ 0xf1fbde49, "dev_uc_del" },
	{ 0xf6375585, "dev_uc_add" },
	{ 0x14ab823, "netdev_rx_handler_register" },
	{ 0x672d3458, "linkwatch_fire_event" },
	{ 0x8298d490, "netif_stacked_transfer_operstate" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xbd671048, "__alloc_percpu_gfp" },
	{ 0x6d87df2a, "netdev_upper_dev_link" },
	{ 0x307b1368, "dev_get_nest_level" },
	{ 0xa4a02131, "register_netdevice" },
	{ 0x45a3a859, "eth_type_trans" },
	{ 0x67d084fd, "___pskb_trim" },
	{ 0x955c2e4e, "skb_pull" },
	{ 0xb0e602eb, "memmove" },
	{ 0xd1cdac20, "netdev_rx_handler_unregister" },
	{ 0xae95bef, "netdev_upper_dev_unlink" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x65522c9c, "unregister_netdevice_queue" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xa792fd7f, "cpumask_next" },
	{ 0x2a70864d, "__cpu_possible_mask" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0xfdc1bd61, "nla_put" },
	{ 0xdf40da5f, "nla_put_64bit" },
	{ 0x27e1a049, "printk" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x949f7342, "__alloc_percpu" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xdbbe7391, "crypto_aead_setauthsize" },
	{ 0xcc845b48, "crypto_aead_setkey" },
	{ 0x37ba5691, "crypto_alloc_aead" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0xdf6e33f3, "crypto_destroy_tfm" },
	{ 0x37a0cba, "kfree" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0xb348a850, "ex_handler_refcount" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0xeb84d26a, "__dev_get_by_index" },
	{ 0x43dae11a, "nla_parse" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "243DF646202B109504231E3");
MODULE_INFO(rhelversion, "8.0");
