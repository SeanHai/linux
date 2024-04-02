#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
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
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xaab23340, "xfrm_calg_get_byname" },
	{ 0x949f7342, "__alloc_percpu" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xa792fd7f, "cpumask_next" },
	{ 0x58f85378, "__pskb_pull_tail" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x2a70864d, "__cpu_possible_mask" },
	{ 0x6fe59cf1, "xfrm_state_delete_tunnel" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x5def83f9, "skb_push" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x618911fc, "numa_node" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xdf6e33f3, "crypto_destroy_tfm" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x67d084fd, "___pskb_trim" },
	{ 0x53569707, "this_cpu_off" },
	{ 0xba8ea898, "crypto_alloc_base" },
	{ 0x23fd3028, "vmalloc_node" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "8F3CEDE4ED3B811D782273C");
MODULE_INFO(rhelversion, "8.0");
