<?php
	// THIS SETS THE ROOT PATH - CHANGE WHEN YOU MOVE //
   $path = $_SERVER['DOCUMENT_ROOT'];
   $path .= "/vsn/";
   if (file_exists($path)) {
	  include_once($path);
   }
   /////////////////////////////////////////////////////

	// Set the path that will be used in include files
	define("vendavoURL", "http://www.vendavo.com");
	define("mainphone", "650.493.5200");

	// Page and Nav Titles
	define("vsnbTitle", "Deal Guide");
	define("dealsTitle", "Deal List");
	define("lookupTitle", "Price Lookup");

	date_default_timezone_set('America/Los_Angeles');//or change to whatever timezone you want

	// Copyright Info
	define("copyright", "&copy;" . date('Y') . " Vendavo");

?>
