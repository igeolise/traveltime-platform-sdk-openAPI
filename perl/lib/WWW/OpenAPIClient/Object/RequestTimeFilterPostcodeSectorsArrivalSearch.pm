=begin comment

TravelTime Platform API

No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)

OpenAPI spec version: 1.0.0
Contact: support@igeolise.com
Generated by: https://openapi-generator.tech

=end comment

=cut

#
# NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
# Do not edit the class manually.
# Ref: https://openapi-generator.tech
#
package WWW::OpenAPIClient::Object::RequestTimeFilterPostcodeSectorsArrivalSearch;

require 5.6.0;
use strict;
use warnings;
use utf8;
use JSON qw(decode_json);
use Data::Dumper;
use Module::Runtime qw(use_module);
use Log::Any qw($log);
use Date::Parse;
use DateTime;

use WWW::OpenAPIClient::Object::RequestRangeFull;
use WWW::OpenAPIClient::Object::RequestTimeFilterPostcodeSectorsProperty;
use WWW::OpenAPIClient::Object::RequestTransportation;

use base ("Class::Accessor", "Class::Data::Inheritable");


#
#
#
# NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech). Do not edit the class manually.
# REF: https://openapi-generator.tech
#

=begin comment

TravelTime Platform API

No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)

OpenAPI spec version: 1.0.0
Contact: support@igeolise.com
Generated by: https://openapi-generator.tech

=end comment

=cut

#
# NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
# Do not edit the class manually.
# Ref: https://openapi-generator.tech
#
__PACKAGE__->mk_classdata('attribute_map' => {});
__PACKAGE__->mk_classdata('openapi_types' => {});
__PACKAGE__->mk_classdata('method_documentation' => {}); 
__PACKAGE__->mk_classdata('class_documentation' => {});

# new object
sub new { 
    my ($class, %args) = @_; 

	my $self = bless {}, $class;
	
	foreach my $attribute (keys %{$class->attribute_map}) {
		my $args_key = $class->attribute_map->{$attribute};
		$self->$attribute( $args{ $args_key } );
	}
	
	return $self;
}  

# return perl hash
sub to_hash {
    return decode_json(JSON->new->convert_blessed->encode( shift ));
}

# used by JSON for serialization
sub TO_JSON { 
    my $self = shift;
    my $_data = {};
    foreach my $_key (keys %{$self->attribute_map}) {
        if (defined $self->{$_key}) {
            $_data->{$self->attribute_map->{$_key}} = $self->{$_key};
        }
    }
    return $_data;
}

# from Perl hashref
sub from_hash {
    my ($self, $hash) = @_;

    # loop through attributes and use openapi_types to deserialize the data
    while ( my ($_key, $_type) = each %{$self->openapi_types} ) {
    	my $_json_attribute = $self->attribute_map->{$_key}; 
        if ($_type =~ /^array\[/i) { # array
            my $_subclass = substr($_type, 6, -1);
            my @_array = ();
            foreach my $_element (@{$hash->{$_json_attribute}}) {
                push @_array, $self->_deserialize($_subclass, $_element);
            }
            $self->{$_key} = \@_array;
        } elsif (exists $hash->{$_json_attribute}) { #hash(model), primitive, datetime
            $self->{$_key} = $self->_deserialize($_type, $hash->{$_json_attribute});
        } else {
        	$log->debugf("Warning: %s (%s) does not exist in input hash\n", $_key, $_json_attribute);
        }
    }
  
    return $self;
}

# deserialize non-array data
sub _deserialize {
    my ($self, $type, $data) = @_;
    $log->debugf("deserializing %s with %s",Dumper($data), $type);
        
    if ($type eq 'DateTime') {
        return DateTime->from_epoch(epoch => str2time($data));
    } elsif ( grep( /^$type$/, ('int', 'double', 'string', 'boolean'))) {
        return $data;
    } else { # hash(model)
        my $_instance = eval "WWW::OpenAPIClient::Object::$type->new()";
        return $_instance->from_hash($data);
    }
}



__PACKAGE__->class_documentation({description => '',
                                  class => 'RequestTimeFilterPostcodeSectorsArrivalSearch',
                                  required => [], # TODO
}                                 );

__PACKAGE__->method_documentation({
    'id' => {
    	datatype => 'string',
    	base_name => 'id',
    	description => '',
    	format => '',
    	read_only => '',
    		},
    'transportation' => {
    	datatype => 'RequestTransportation',
    	base_name => 'transportation',
    	description => '',
    	format => '',
    	read_only => '',
    		},
    'travel_time' => {
    	datatype => 'int',
    	base_name => 'travel_time',
    	description => '',
    	format => '',
    	read_only => '',
    		},
    'arrival_time' => {
    	datatype => 'DateTime',
    	base_name => 'arrival_time',
    	description => '',
    	format => '',
    	read_only => '',
    		},
    'reachable_postcodes_threshold' => {
    	datatype => 'double',
    	base_name => 'reachable_postcodes_threshold',
    	description => '',
    	format => '',
    	read_only => '',
    		},
    'properties' => {
    	datatype => 'ARRAY[RequestTimeFilterPostcodeSectorsProperty]',
    	base_name => 'properties',
    	description => '',
    	format => '',
    	read_only => '',
    		},
    'range' => {
    	datatype => 'RequestRangeFull',
    	base_name => 'range',
    	description => '',
    	format => '',
    	read_only => '',
    		},
});

__PACKAGE__->openapi_types( {
    'id' => 'string',
    'transportation' => 'RequestTransportation',
    'travel_time' => 'int',
    'arrival_time' => 'DateTime',
    'reachable_postcodes_threshold' => 'double',
    'properties' => 'ARRAY[RequestTimeFilterPostcodeSectorsProperty]',
    'range' => 'RequestRangeFull'
} );

__PACKAGE__->attribute_map( {
    'id' => 'id',
    'transportation' => 'transportation',
    'travel_time' => 'travel_time',
    'arrival_time' => 'arrival_time',
    'reachable_postcodes_threshold' => 'reachable_postcodes_threshold',
    'properties' => 'properties',
    'range' => 'range'
} );

__PACKAGE__->mk_accessors(keys %{__PACKAGE__->attribute_map});


1;
