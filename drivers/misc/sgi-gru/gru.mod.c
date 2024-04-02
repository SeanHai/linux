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
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xea2b701b, "up_read" },
	{ 0x195b9e7e, "__put_devmap_managed_page" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0xc7f4b92, "single_open" },
	{ 0x15a4c106, "proc_create_seq_private" },
	{ 0x985ca3e0, "single_release" },
	{ 0xefb1e884, "downgrade_write" },
	{ 0x12e285ec, "is_uv_system" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0xc41033c1, "seq_printf" },
	{ 0x33c381a7, "__mmu_notifier_register" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x44aaf30f, "tsc_khz" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x4b94a99b, "seq_read" },
	{ 0x2a2c4ae4, "__alloc_pages_nodemask" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xb3b42a38, "mutex_trylock" },
	{ 0x91185511, "down_read" },
	{ 0xa792fd7f, "cpumask_next" },
	{ 0x3a966ef, "down_write_trylock" },
	{ 0x50a25b70, "__uv_cpu_info" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xb44ad4b3, "_copy_to_user" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0x6bddef80, "misc_register" },
	{ 0xfb578fc5, "memset" },
	{ 0x9dc0d821, "proc_mkdir" },
	{ 0xf9c388e5, "dev_err" },
	{ 0xf7d6636f, "current_task" },
	{ 0xa50bcff0, "x86_cpu_to_apicid" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0x27e1a049, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x31cd8869, "__cpu_online_mask" },
	{ 0x42f9af6d, "mmu_notifier_unregister" },
	{ 0x7c1372e8, "panic" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x85d45f4d, "noop_llseek" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0x1d19f77b, "physical_mask" },
	{ 0x85142f62, "up_write" },
	{ 0x65baf559, "down_write" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x9f46ced8, "__sw_hweight64" },
	{ 0xf11543ff, "find_first_zero_bit" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x67dcd76b, "uv_setup_irq" },
	{ 0xe330909c, "find_vma" },
	{ 0xc6cbbc89, "capable" },
	{ 0x7c3aaa29, "kstrtoul_from_user" },
	{ 0x618911fc, "numa_node" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xa5d633ef, "get_user_pages" },
	{ 0x8ad5ceb1, "__uv_hub_info_list" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1000e51, "schedule" },
	{ 0xa202a8e5, "kmalloc_order_trace" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xb18bf4ff, "down_read_trylock" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0xf99d347e, "node_states" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xc9d2fb8f, "remove_proc_subtree" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xb4acb381, "zap_vma_ptes" },
	{ 0x291eb36, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0x6c173686, "remap_pfn_range" },
	{ 0x69acdf38, "memcpy" },
	{ 0xbe29d83f, "pv_mmu_ops" },
	{ 0x5d9317d7, "uv_teardown_irq" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x63c4d61f, "__bitmap_weight" },
	{ 0x29361773, "complete" },
	{ 0x28318305, "snprintf" },
	{ 0xdaa1dda5, "proc_create" },
	{ 0x362ef408, "_copy_from_user" },
	{ 0xc054ebe3, "param_ops_ulong" },
	{ 0xf49409b0, "misc_deregister" },
	{ 0x32d2ba9f, "__init_rwsem" },
	{ 0x2a6bb061, "__put_page" },
	{ 0xaa86cfb5, "uv_possible_blades" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xf1e63929, "devmap_managed_key" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "8EB9D3AB33E219FB7736B4C");
MODULE_INFO(rhelversion, "8.0");
