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
	{ 0x6b8d353d, "device_remove_file" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0x27d8667f, "execute_in_process_context" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0xec2580fd, "crypto_alloc_shash" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x261272bc, "remap_vmalloc_range" },
	{ 0x41c99cea, "ib_get_eth_speed" },
	{ 0x37faa150, "ip_local_out" },
	{ 0xaf273372, "vlan_dev_vlan_id" },
	{ 0xa54c0ba0, "dma_set_mask" },
	{ 0x15244c9d, "boot_cpu_data" },
	{ 0xffae8e8b, "nsecs_to_jiffies" },
	{ 0xa317e6b9, "sock_release" },
	{ 0xfc33ccad, "dst_release" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xe6e34593, "dev_get_by_name" },
	{ 0x2124474, "ip_send_check" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x9b7fe4d4, "__dynamic_pr_debug" },
	{ 0x87b8798d, "sg_next" },
	{ 0x4cc8f9c8, "init_timer_key" },
	{ 0xe13bfd58, "sock_create_kern" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0xb348a850, "ex_handler_refcount" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xb3f2bc64, "skb_scrub_packet" },
	{ 0xe4bf7f13, "dma_set_coherent_mask" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xce214081, "ib_get_cached_gid" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x7e53c8ad, "ib_alloc_device" },
	{ 0x5eaeb6b2, "udp_sock_create6" },
	{ 0x6fb8ef20, "setup_udp_tunnel_sock" },
	{ 0x5f8155db, "ib_dealloc_device" },
	{ 0xc8df8267, "dev_mc_add" },
	{ 0x58f85378, "__pskb_pull_tail" },
	{ 0xd09eff23, "dma_get_required_mask" },
	{ 0xb44ad4b3, "_copy_to_user" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x4cc2d7d0, "udp_tunnel_sock_release" },
	{ 0x6424b34f, "dma_virt_ops" },
	{ 0xec02a35f, "del_timer_sync" },
	{ 0xfb578fc5, "memset" },
	{ 0x2a70864d, "__cpu_possible_mask" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0x27e1a049, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xc06df4fc, "crypto_shash_update" },
	{ 0x479c3c86, "find_next_zero_bit" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0xcf1309ab, "dev_mc_del" },
	{ 0x9b7dd98c, "ib_query_port" },
	{ 0x5792f848, "strlcpy" },
	{ 0x8a7de935, "kmem_cache_free" },
	{ 0x5def83f9, "skb_push" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0xe78bfacd, "crc32_le" },
	{ 0xa19adae5, "kernel_sock_shutdown" },
	{ 0xaf309ec7, "ib_umem_get" },
	{ 0xf1969a8e, "__usecs_to_jiffies" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x28985b9f, "mod_timer" },
	{ 0xf7a5f713, "mark_tech_preview" },
	{ 0xc26ae7ad, "ipv6_stub" },
	{ 0xed946a48, "init_net" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xf89c9227, "vlan_dev_real_dev" },
	{ 0xdc8d485c, "ib_dispatch_event" },
	{ 0xf11543ff, "find_first_zero_bit" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x5d2f1135, "device_create_file" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xea4805c2, "skb_queue_tail" },
	{ 0x2b63e7fc, "kmem_cache_alloc" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x61b90370, "__alloc_skb" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0x5635a60a, "vmalloc_user" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x3037ddc0, "ib_register_device" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xc5c92ee, "kfree_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xaa84e77b, "ib_unregister_device" },
	{ 0xdf6e33f3, "crypto_destroy_tfm" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0x8678453c, "kmem_cache_create" },
	{ 0x44dd64d9, "ip_route_output_flow" },
	{ 0x37a0cba, "kfree" },
	{ 0x4bf4d99d, "ib_sg_to_pages" },
	{ 0x69acdf38, "memcpy" },
	{ 0xd2938951, "ib_modify_qp_is_ok" },
	{ 0x63c4d61f, "__bitmap_weight" },
	{ 0x488a0ef1, "skb_dequeue" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0xcc616694, "udp_sock_create4" },
	{ 0xd2739699, "ib_find_cached_gid_by_port" },
	{ 0x28318305, "snprintf" },
	{ 0x897e956d, "ip6_local_out" },
	{ 0xeb4b9a49, "skb_put" },
	{ 0x362ef408, "_copy_from_user" },
	{ 0xd1525896, "ib_umem_release" },
	{ 0xcc584dfe, "__ip_select_ident" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ib_core,ip6_udp_tunnel,udp_tunnel";


MODULE_INFO(srcversion, "0F44830AFF0504D3D0E39BD");
MODULE_INFO(rhelversion, "8.0");
