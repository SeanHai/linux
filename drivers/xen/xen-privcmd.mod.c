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
	{ 0x45d14bdf, "hypercall_page" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0x2068fc5b, "xen_remap_domain_gfn_range" },
	{ 0x195b9e7e, "__put_devmap_managed_page" },
	{ 0xabeee3b6, "xen_remap_domain_mfn_array" },
	{ 0x4b931968, "xen_features" },
	{ 0x9b7fe4d4, "__dynamic_pr_debug" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0xc512626a, "__supported_pte_mask" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x6bddef80, "misc_register" },
	{ 0xc980cd22, "xen_unmap_domain_gfn_range" },
	{ 0xf7d6636f, "current_task" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0x27e1a049, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xe569894c, "apply_to_page_range" },
	{ 0xe7b00dfb, "__x86_indirect_thunk_r13" },
	{ 0xa01f2739, "alloc_xenballooned_pages" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x3cdfa33f, "xen_remap_domain_gfn_array" },
	{ 0x1d19f77b, "physical_mask" },
	{ 0x85142f62, "up_write" },
	{ 0x65baf559, "down_write" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xdec10080, "vm_insert_page" },
	{ 0xc7cdd94a, "free_xenballooned_pages" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xe330909c, "find_vma" },
	{ 0x734d1ea8, "__free_pages" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x6d334118, "__get_user_8" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0xf654831f, "ex_handler_default" },
	{ 0x37a0cba, "kfree" },
	{ 0xbe29d83f, "pv_mmu_ops" },
	{ 0x731dba7a, "xen_domain_type" },
	{ 0x362ef408, "_copy_from_user" },
	{ 0x8f648a94, "param_ops_uint" },
	{ 0xb285b8f8, "xen_in_preemptible_hcall" },
	{ 0xf49409b0, "misc_deregister" },
	{ 0x7da99cdd, "clear_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x2a6bb061, "__put_page" },
	{ 0x9af36e0c, "get_user_pages_fast" },
	{ 0xf1e63929, "devmap_managed_key" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "110BC4670D683FE85995DB1");
MODULE_INFO(rhelversion, "8.0");
