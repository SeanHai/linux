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
	{ 0x2ff5765f, "fc_linkup" },
	{ 0xb81bf6c5, "alloc_pages_current" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x421dfbb0, "bus_register" },
	{ 0x6958d698, "fc_exch_init" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0x195b9e7e, "__put_devmap_managed_page" },
	{ 0x8283cd1e, "fc_rport_create" },
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0xfa5223cc, "del_timer" },
	{ 0x754d539c, "strlen" },
	{ 0x43a53735, "__alloc_workqueue_key" },
	{ 0xb0ddd5a1, "fc_rport_flush_queue" },
	{ 0xe637fa94, "dev_printk" },
	{ 0xb7a47af2, "fc_seq_els_rsp_send" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x8c24bd72, "skb_clone" },
	{ 0xe6e34593, "dev_get_by_name" },
	{ 0xc1c794e, "delayed_work_timer_fn" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0xad27f361, "__warn_printk" },
	{ 0x81b1b255, "cancel_work_sync" },
	{ 0x4cc8f9c8, "init_timer_key" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0xb348a850, "ex_handler_refcount" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x91715312, "sprintf" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x5b5a9263, "skb_trim" },
	{ 0xa792fd7f, "cpumask_next" },
	{ 0x7db9fd3a, "__netdev_alloc_skb" },
	{ 0xa1c82bd9, "fc_fcp_init" },
	{ 0x58f85378, "__pskb_pull_tail" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x143c45c7, "fc_disc_config" },
	{ 0xec02a35f, "del_timer_sync" },
	{ 0xf71e8617, "skb_queue_purge" },
	{ 0x60ea2d6, "kstrtoull" },
	{ 0xfb578fc5, "memset" },
	{ 0x255dde7a, "fc_elsct_init" },
	{ 0x2a70864d, "__cpu_possible_mask" },
	{ 0xf8d93d9d, "fc_vport_id_lookup" },
	{ 0xb5a8d234, "cancel_delayed_work" },
	{ 0xd257960c, "device_register" },
	{ 0xf7d6636f, "current_task" },
	{ 0xcdf34369, "__ethtool_get_link_ksettings" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0x27e1a049, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x1a9a433c, "prandom_u32_state" },
	{ 0xb9619f9a, "fc_exch_recv" },
	{ 0x39ebf577, "fc_lport_set_local_id" },
	{ 0xe7b00dfb, "__x86_indirect_thunk_r13" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0x9166fada, "strncpy" },
	{ 0x5792f848, "strlcpy" },
	{ 0x5def83f9, "skb_push" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0xe78bfacd, "crc32_le" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x28985b9f, "mod_timer" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x955c2e4e, "skb_pull" },
	{ 0xed946a48, "init_net" },
	{ 0xd831f284, "bus_unregister" },
	{ 0x1c9e0271, "fc_lport_reset" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xea4805c2, "skb_queue_tail" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xd1e4ec46, "queue_delayed_work_on" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xc5c92ee, "kfree_skb" },
	{ 0x4fdb1f20, "fc_linkdown" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xd26e6c56, "fc_rport_login" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xc3c6ebd3, "fc_disc_init" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x68dcaa82, "fc_rport_logoff" },
	{ 0x37a0cba, "kfree" },
	{ 0x488a0ef1, "skb_dequeue" },
	{ 0x6ecae48b, "device_unregister" },
	{ 0x9d50ed7e, "fc_rport_destroy" },
	{ 0x121da905, "queue_work_on" },
	{ 0x28318305, "snprintf" },
	{ 0x39f9f3, "fc_lport_init" },
	{ 0x509f625d, "consume_skb" },
	{ 0x76ca9e4e, "dev_set_name" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x9688b47c, "dev_queue_xmit" },
	{ 0xeb4b9a49, "skb_put" },
	{ 0x8f648a94, "param_ops_uint" },
	{ 0x2a6bb061, "__put_page" },
	{ 0x97183961, "dev_get_stats" },
	{ 0xf1e63929, "devmap_managed_key" },
	{ 0x2d0d8192, "fc_rport_lookup" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libfc";


MODULE_INFO(srcversion, "17D8A8318695F4558DE7543");
MODULE_INFO(rhelversion, "8.0");
